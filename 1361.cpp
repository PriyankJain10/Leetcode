// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    bool dfs(vector<vector<int>> &adj, vector<bool> &v, vector<bool> &rec, int sv)
    {
        v[sv] = 1, rec[sv] = 1;
        for(int i=0;i<adj[sv].size();i++)
        {
            if(rec[adj[sv][i]] && v[adj[sv][i]])
                return 0;
            if(!v[adj[sv][i]])
                if(!dfs(adj, v, rec, adj[sv][i]))
                    return 0;
        }
        rec[sv] = 0;
        return 1;
    }
    
    bool validateBinaryTreeNodes(int n, vector<int>& l, vector<int>& r) {
        vector<bool> v(n);
        vector<vector<int> > adj(n);
        for(int i=0;i<n;i++)
        {
            if(l[i]!=-1)
            {
                adj[i].push_back(l[i]);
                if(v[l[i]])
                    return 0;
                v[l[i]] = 1;
            }
            if(r[i]!=-1)
            {
                adj[i].push_back(r[i]);
                if(v[r[i]])
                    return 0;
                v[r[i]] = 1;
            }
        }
        int sv = 0, z = 0;
        for(int i=0;i<n;i++)
            if(v[i] == 0)
                sv = i, z++;
        
        if(z!=1)
            return 0;
        v.clear();
        v.resize(n);
        vector<bool> rec(n);
        if(dfs(adj, v, rec, sv))
        {
            for(int i=0;i<n;i++)
            {
                if(!v[i])
                    return 0;
            }
            return 1;
        }
        return 0;
    }





int main(){
  
  return 0;
}