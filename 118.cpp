// time - O(n^2)   
// space - O(n^2)              

#include<bits/stdc++.h>
using namespace std;

    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++)
        {
            vector<int> v(i+1);
            v[0] = 1;
            for(int j=1;j<i;j++)
            {
                v[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            v[i] = 1;
            ans.push_back(v);
        }
        return ans;
    }



int main(){
  
  return 0;
}