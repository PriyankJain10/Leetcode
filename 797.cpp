// time - O(exp(n))   
// space - O(n^2)               

#include<bits/stdc++.h>
using namespace std;

    

    void dfs(vector<vector<int> > &v, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &path, int sv, int n)
    {
        path.push_back(sv);
        if(sv == n)
        {
            v.push_back(path);
            path.pop_back();
            return;
        }
        visited[sv] = 1;
        for(int i=0;i<adj[sv].size();i++)
        {
            if(visited[adj[sv][i]])
                continue;
            dfs(v, adj, visited, path, adj[sv][i], n);
        }
        path.pop_back();
        visited[sv] = 0;
        return;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int> > v;
        vector<bool> visited(n,0);
        vector<int> path;
        dfs(v, graph, visited, path, 0, n-1);
        return v;
        
    }






int main(){
  
  return 0;
}