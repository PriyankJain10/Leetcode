// time - O(n^2)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n/2;i++)
        {
            for(int j=i;j<n-i-1;j++)
            {
                int x = matrix[n-j-1][i];
                matrix[n-j-1][i] = matrix[n-i-1][n-j-1];
                matrix[n-i-1][n-j-1] = matrix[j][n-i-1];
                matrix[j][n-i-1] = matrix[i][j];
                matrix[i][j] = x;
            }
        }
        return ;
    }




int main(){
  
  return 0;
}