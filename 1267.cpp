// time - O(n^2)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int countServers(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> r(n), c(m);
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j])
                    r[i]++, c[j]++;
            
        int count = 0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j] && (r[i] > 1 || c[j]> 1))
                    count++;
        
        return count;
    }






int main(){
  
  return 0;
}