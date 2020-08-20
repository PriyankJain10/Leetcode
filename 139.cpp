// time - O(n^2)
// space - O(n)      

#include<bits/stdc++.h>
using namespace std;


bool rec(vector<int> &dp, string s, unordered_map<string, bool> &m, int n, int i)
    {
        if(i == n)
            return 1;
        if(dp[i] > -1)
            return dp[i];
        bool f = 0;
        string t = "";
        for(int j=i;j<n;j++)
        {
            t+=s[j];
            if(m[t] == 1)
            {
                f = f | rec(dp, s, m, n, j+1);
            }
        }
        dp[i] = f;
        return f;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string , bool> m;
        int n = wordDict.size();
        for(int i = 0;i < n;i++)
            m[wordDict[i]] = 1;
        vector<int> dp(s.size()+1, -1);
        return rec(dp, s, m, s.size(), 0);
    }


int main(){
  
  return 0;
}