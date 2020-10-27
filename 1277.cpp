// time - O(n*m)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int countSquares(vector<vector<int>>& matrix) {
        int cnt = 0, n = matrix.size(), m = matrix[0].size();
        if(n == 1 || m == 1)
        {
            for(int i=0;i<n;i++)
                if(matrix[i][0])
                    cnt++;
            for(int i=1;i<m;i++)
                if(matrix[0][i])
                    cnt++;
            return cnt;
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(matrix[i][j] && i<n-1 && j<m-1)
                    matrix[i][j] += min(matrix[i+1][j+1], min(matrix[i+1][j], matrix[i][j+1]));
                cnt += matrix[i][j];
            }
        }
        return cnt;
    }




int main(){
  
  return 0;
}