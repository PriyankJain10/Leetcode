// time - O(exp(n))   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int maze(vector<vector<int>> &g, int &n, int &m, int i, int j)
    {
        if(i<0 || i>=n || j<0 || j>=m || g[i][j] == 0)
            return 0;
        int t = g[i][j], ans = 0;
        g[i][j] = 0;
        ans = max(ans , maze(g, n, m, i+1, j));
        ans = max(ans , maze(g, n, m, i-1, j));
        ans = max(ans , maze(g, n, m, i, j+1));
        ans = max(ans , maze(g, n, m, i, j-1));
        
        g[i][j] = t;
        
        return ans + t;
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), ans = 0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j])
                    ans = max(ans, maze(grid, n, m, i, j));
        return ans;
    }






int main(){
  
  return 0;
}