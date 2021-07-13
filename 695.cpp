// time - O(n)   
// space - O(n) (by recursion)              

#include<bits/stdc++.h>
using namespace std;

    
    int rec(vector<vector<int>> &grid, int i, int j, int n, int m)
    {
        grid[i][j] = 0;
        int ans = 1;
        int x[4] = {0, 0, 1, -1};
        int y[4] = {1, -1, 0, 0};
        for(int k=0;k<4;k++)
        {
            int r = i + x[k], c = j + y[k];
            if(r >= 0 && r < n && c >= 0 && c < m && grid[r][c] == 1)
                ans += rec(grid, r, c, n, m);
        }
        
        return ans;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])
                    ans = max(ans, rec(grid, i, j, n, m));
            }
        }
        return ans;
    }



int main(){
  
  return 0;
}