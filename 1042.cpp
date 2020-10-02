// time - O(n)   
// space - O(4*n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> gardenNoAdj(int N, vector<vector<int>>& path) {
        vector<vector<int>> adj(N);
        for(int i=0;i<path.size();i++)
        {
            adj[path[i][0]-1].push_back(path[i][1]-1);
            adj[path[i][1]-1].push_back(path[i][0]-1);
        }
        vector<int> v(N);
        for(int i=0;i<N;i++)
        {
            bool flag = 1;
            for(int j=0;j<adj[i].size();j++)
            {
                if(v[adj[i][j]] == 1)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                v[i] = 1;
                continue;
            }
            flag = 1;
            for(int j=0;j<adj[i].size();j++)
            {
                if(v[adj[i][j]] == 2)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                v[i] = 2;
                continue;
            }
            flag = 1;
            for(int j=0;j<adj[i].size();j++)
            {
                if(v[adj[i][j]] == 3)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                v[i] = 3;
                continue;
            }
            v[i] = 4;
        }
        return v;
    }






int main(){
  
  return 0;
}