// time - O(n^2)
// space - O(n^2)      

#include<bits/stdc++.h>
using namespace std;


    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> sum(n, vector<int> (m));
        sum[n-1][m-1] = mat[n-1][m-1];
        for(int i=n-2;i>=0;i--)
            sum[i][m-1] = mat[i][m-1] + sum[i+1][m-1];
        for(int i = m-2;i>=0;i--)
            sum[n-1][i] = mat[n-1][i] + sum[n-1][i+1];
        for(int i=n-2;i>=0;i--)
        {
            for(int j=m-2;j>=0;j--)
            {
                sum[i][j] = mat[i][j] - sum[i+1][j+1] + sum[i+1][j] + sum[i][j+1];
            }
        }
        vector<vector<int>> ans(n, vector<int> (m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int li = max(0, i - k), lj = max(0, j - k);
                int ui = i + k + 1, uj = j + k + 1;
                ans[i][j] = sum[li][lj];
                if(ui < n && uj < m)
                {
                    ans[i][j] += sum[ui][uj] - sum[ui][lj] - sum[li][uj];
                }
                else if(ui < n)
                {
                    ans[i][j] -= sum[ui][lj];
                }
                else if(uj < m)
                {
                    ans[i][j] -= sum[li][uj];
                }   
            }
        }
        return ans;
    }


int main(){
  
  return 0;
}