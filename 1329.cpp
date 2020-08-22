// time - O(n^2 logn)
// space - O(n^2) 

#include<bits/stdc++.h>
using namespace std;


    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        unordered_map<int, int> sidx;
        unordered_map<int, vector<int>> um;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                um[i-j].push_back(mat[i][j]);
            }
        }
        for(auto it = um.begin(); it!=um.end();it++)
        {
            sort(it->second.begin(), it->second.end());
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mat[i][j] = um[i-j][sidx[i-j]];
                sidx[i-j]++;
            }
        }
        return mat;
    }


int main(){
  
  return 0;
}