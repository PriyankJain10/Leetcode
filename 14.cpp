// time - O(n^2)
// space - O(1)

#include<bits/stdc++.h>
using namespace std;

    
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = "";
        if(n == 1)
            return strs[0];
        if(n == 0)
            return ans;
        int l = strs[0].size();
        for(int i=1;i<n;i++)
        {
            if(l > strs[i].size())
                l = strs[i].size();
        }
        for(int i=0;i<l;i++)
        {
            char c = strs[0][i];
            bool flag = 1;
            for(int j=0;j<n;j++)
            {
                if(strs[j][i] != c)
                {
                    flag = 0;
                    break;
                }
            }
            if(!flag)
                break;
            ans += c;    
        }
        return ans;
    }




int main(){
  
  return 0;
}