// time - O(n)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    
    void pos(vector<unordered_set<int>> &adj, vector<int> &cnt, vector<int> &ans, int sv, int pv)
    {
        for(auto i : adj[sv])
        {
            if(i == pv)
                continue;
            pos(adj, cnt, ans, i, sv);
            cnt[sv] += cnt[i];
            ans[sv] += ans[i] + cnt[i];
        }
        return ;
    }
    
    void pre(vector<unordered_set<int>> &adj, vector<int> &cnt, vector<int> &ans, int sv, int pv)
    {
        for(auto i : adj[sv])
        {
            if(i == pv)
                continue;
            ans[i] = ans[sv] + adj.size() - (2*cnt[i]);
            pre(adj, cnt, ans, i, sv);
        }
        return ;
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<int> ans(n), cnt(n, 1);
        vector<unordered_set<int>> adj(n);
        
        for(auto v : edges)
        {
            adj[v[0]].insert(v[1]);
            adj[v[1]].insert(v[0]);
        }
        
        pos(adj, cnt, ans, 0, -1);
        pre(adj, cnt, ans, 0, -1);
        
        return ans;
    }



int main(){
  
  return 0;
}