// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    bool cycle(vector<vector<int> > &adj, vector<bool> &visited, vector<bool> &rec, int sv)
    {
        visited[sv] = 1;
        rec[sv] = 1;
        for(int i=0;i<adj[sv].size();i++)
        {
            if(visited[adj[sv][i]] && rec[adj[sv][i]])
                return 1;
            if(!visited[adj[sv][i]])
            {
                if(cycle(adj, visited, rec, adj[sv][i]))
                    return 1;
            }
        }
        rec[sv] = 0;
        return 0;
    }
    
    void topologicalsort(vector<vector<int> > &adj, vector<bool> &visited, stack<int> &s, int sv)
    {
        visited[sv] = 1;
        for(int i=0;i<adj[sv].size();i++)
        {
            if(visited[adj[sv][i]] == 0)
            {
                topologicalsort(adj, visited, s, adj[sv][i]);
            }
        }
        s.push(sv);
        return ;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int> > adj(numCourses);
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<bool> visited(numCourses), rec(numCourses);
        vector<int> v;
        for(int i=0;i<numCourses;i++)
        {
            if(!visited[i])
                if(cycle(adj, visited, rec, i))
                    return v;
        }
        visited.clear();
        visited.resize(numCourses);
        stack<int> s;
        for(int i=0;i<numCourses;i++)
            if(!visited[i])
                topologicalsort(adj, visited, s, i);
        while(s.size())
        {
            v.push_back(s.top());
            s.pop();
        }
        
        return v;
    }




int main(){
  
  return 0;
}