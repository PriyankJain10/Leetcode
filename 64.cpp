// time - O(n^2)   
// space - O(1)        

#include<bits/stdc++.h>
using namespace std;

    
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        if(n == 1 && m == 1)
            return grid[0][0];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i == 0 && j == 0)
                    continue;
                int x = INT_MAX;
                if(i > 0)
                    x = min(x, grid[i-1][j]);
                if(j > 0)
                    x = min(x, grid[i][j-1]);
                grid[i][j] += x;
            }
        }
        return grid[n-1][m-1];
    }




int main(){
  
  return 0;
}