// time - O(n^2)   
// space - O(n^2)               

#include<bits/stdc++.h>
using namespace std;

    

    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int> m;
        for(int i=0;i<matrix.size();i++)
        {
            string s = "1";
            for(int j=1;j<matrix[i].size();j++)
            {
                if(matrix[i][j] == matrix[i][0])
                    s += "1";
                else
                    s += "0";
            }
            m[s]++;
        }
        int x = 0;
        for(auto it : m)
            x = max(x, it.second);
        return x;
    }





int main(){
  
  return 0;
}