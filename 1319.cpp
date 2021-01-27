// time - O(n)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    

    void dfs(vector<vector<int>> &adj, vector<bool> &visited, int n, int sv, int pv)
    {
        visited[sv] = 1;
        for(int i=0;i<adj[sv].size();i++)
        {
            if(adj[sv][i] == pv)
                continue;
            if(!visited[adj[sv][i]])
                dfs(adj, visited, n, adj[sv][i], sv);
        }
        return;
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1)
            return -1;
        vector<bool> visited(n);
        vector<vector<int>> adj(n);
        for(int i=0;i<connections.size();i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        
        bool flag = 1;
        int ans = 0, sv = 0;
        
        while(flag)
        {
            flag = 0;
            sv = 0;
            for(int i=0;i<n;i++)
            {
                if(!visited[i])
                {
                    flag = 1;
                    sv = i;
                    ans++;
                    break;
                }
            }
            if(flag)
                dfs(adj, visited, n, sv, -1);
        }
        return max(0, ans-1);
    }




int main(){
  
  return 0;
}