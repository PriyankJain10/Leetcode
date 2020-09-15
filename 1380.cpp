// time - O(n*m)
// space - O(n*m)

#include<bits/stdc++.h>
using namespace std;

    
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> row(n), col(m), ans;
        for(int i=0;i<n;i++)
        {
            row[i] = matrix[i][0];
            for(int j=1;j<m;j++)
                row[i] = min(row[i], matrix[i][j]);
        }
        for(int j=0;j<m;j++)
        {
            col[j] = matrix[0][j];
            for(int i=1;i<n;i++)
                col[j] = max(col[j], matrix[i][j]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] == row[i] && matrix[i][j] == col[j])
                    ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }




int main(){
  
  return 0;
}