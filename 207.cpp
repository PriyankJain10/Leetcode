// time - O(n^2)
// space - O(n^2)

#include<bits/stdc++.h>
using namespace std;

    
    bool dfs(vector<vector<int>> &edges, vector<bool> &visited, vector<bool> &rec, int sv)
    {
        visited[sv] = 1;
        rec[sv] = 1;
        for(int i=0;i<edges[sv].size();i++)
        {
            if(visited[edges[sv][i]] && rec[edges[sv][i]])
                return 1;
            if(!visited[edges[sv][i]])
            {
                if(dfs(edges, visited, rec, edges[sv][i]))
                    return 1;
            }
        }
        rec[sv] = 0;
        return 0;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int> > edges(numCourses);
        for(int i=0;i<prerequisites.size();i++)
            edges[prerequisites[i][1]].push_back(prerequisites[i][0]);
        vector<bool> visited(numCourses, 0), rec(numCourses, 0);
        while(1)
        {
            int i;
            for(i=0;i<numCourses;i++)
                if(!visited[i])
                    break;
            if(i == numCourses)
                break;
            if(dfs(edges, visited, rec, i))
                return 0;
        }
        return 1;
        
    }




int main(){
  
  return 0;
}