// time - O(n^2)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
    int minFallingPathSum(vector<vector<int>>& A) {
        int n = A.size();
        if(n == 1)
            return A[0][0];
        for(int i=n-2;i>=0;i--)
        {
            A[i][0] += min(A[i+1][0], A[i+1][1]);
            A[i][n-1] += min(A[i+1][n-1], A[i+1][n-2]);
            for(int j=1;j<n-1;j++)
            {
                A[i][j] += min(A[i+1][j], min(A[i+1][j+1], A[i+1][j-1]));
            }
        }
        int ans = A[0][0];
        for(int i=1;i<n;i++)
            ans = min(ans, A[0][i]);
        return ans;
    }



int main(){
  
  return 0;
}