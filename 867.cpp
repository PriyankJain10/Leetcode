// time - O(n*m)    
// space - O(n*m) 

#include<bits/stdc++.h>
using namespace std;

    
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int n = A.size(), m = A[0].size();
        vector<vector<int>> v(m, vector<int> (n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                v[j][i] = A[i][j];
            }
        }
        return v;
    }



int main(){
  
  return 0;
}