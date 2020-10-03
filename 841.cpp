// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    void dfs(vector<vector<int>> &adj, vector<bool> &v, int sv)
    {
        v[sv] = 1;
        for(int i=0;i<adj[sv].size();i++)
        {
            if(!v[adj[sv][i]])
                dfs(adj, v, adj[sv][i]);
        }
        return ;
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> v(rooms.size(), 0);
        dfs(rooms, v, 0);
        for(bool x : v)
            if(!x)
                return 0;
        return 1;
    }






int main(){
  
  return 0;
}