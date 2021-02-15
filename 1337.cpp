// time - O(n*m)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> v;
        for(int i=0;i<mat.size();i++)
        {
            int cnt = 0;
            for(int j=0;j<mat[i].size();j++)
                cnt += mat[i][j];
            v.push_back(make_pair(cnt, i));
        }
        sort(v.begin(), v.end());
        vector<int> ans(k);
        for(int i=0;i<k;i++)
            ans[i] = v[i].second;
        return ans;
    }




int main(){
  
  return 0;
}