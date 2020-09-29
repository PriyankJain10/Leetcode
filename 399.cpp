// time - O(n^2)   
// space - O(n^2)               

#include<bits/stdc++.h>
using namespace std;

    

    double dfs(vector<vector<pair<int, double>>> &adj, vector<bool> &visited, int sv, int ev, double curr)
    {
        if(sv == ev)
            return curr;
        double ans = -1.0;
        visited[sv] = 1;
        for(int i=0;i<adj[sv].size();i++)
        {
            if(!visited[adj[sv][i].first])
            {
                double c = dfs(adj, visited, adj[sv][i].first , ev, curr*adj[sv][i].second);
                if(c != -1.0)
                    ans = c;
            }
        }
        return ans;
    }
    
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        int n = 1;
        unordered_map<string, int> nodes;
        for(int i=0;i<equations.size();i++)
        {
            if(nodes[equations[i][0]] == 0)
                nodes[equations[i][0]] = n++;
            if(nodes[equations[i][1]] == 0)
                nodes[equations[i][1]] = n++;
        }
        
        // 1 based indexing 
        vector<vector<pair<int, double>>> adj(n);
        for(int i=0;i<equations.size();i++)
        {
            adj[nodes[equations[i][0]]].push_back({nodes[equations[i][1]], values[i]});
            adj[nodes[equations[i][1]]].push_back({nodes[equations[i][0]], 1.0/values[i]});
        }
        
        vector<double> v(queries.size(), 1.0);
        
        for(int i=0;i<queries.size();i++)
        {
            if(nodes.count(queries[i][0]) == 0 || nodes.count(queries[i][1]) == 0)
            {
                v[i] = -1.0;
                continue;
            }
            else
            {
                vector<bool> visited(n, 0);
                v[i] = dfs(adj, visited, nodes[queries[i][0]], nodes[queries[i][1]], 1.0);
            }
        }
        return v;
    }






int main(){
  
  return 0;
}