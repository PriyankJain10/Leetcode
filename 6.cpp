// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        int n = s.size(), row = 0;
        vector<vector<int>> v(numRows);
        bool flag = 0;
        for(int i=0;i<n;i++)
        {
            v[row].push_back(i);
            if(flag)
            {
                if(row == 0)
                {
                    row++;
                    flag = 0;
                }
                else
                    row--;
            }
            else
            {
                if(row == numRows-1)
                {
                    row--;
                    flag = 1;
                }
                else
                    row++;
            }
        }
        string ans = "";
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                ans += s[v[i][j]];
            }
        }
        return ans;
    }




int main(){
  
  return 0;
}