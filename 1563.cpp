// time - O(n^3)    
// space - O(n^2) 

#include<bits/stdc++.h>
using namespace std;


    int rec(vector<vector<int>> &dp, vector<int> &prefix, vector<int> &v, int s, int e)
    {
        if(s == e)
            return 0;
        
        if(dp[s][e] > -1)
            return dp[s][e];
        
        int l=0, r=0;
        for(int i=s;i<e;i++)
        {
            l = prefix[i];
            if(s>0)
                l -= prefix[s-1];
            r = prefix[e] - prefix[i];
            if(r > l)
            {
                dp[s][e] = max(dp[s][e], l + rec(dp, prefix, v, s, i));
            }
            else if(l > r)
            {
                dp[s][e] = max(dp[s][e], r + rec(dp, prefix, v, i+1, e));
            }
            else
            {
                dp[s][e] = max(dp[s][e], l + max(rec(dp, prefix, v, s, i), rec(dp, prefix, v, i+1, e)));
            }
        }
        return dp[s][e];
    }
    
    int stoneGameV(vector<int>& stoneValue) {
        int n = stoneValue.size();
        if(n < 2)
            return 0;
        vector<int> prefix(n);
        prefix[0] = stoneValue[0];
        for(int i=1;i<n;i++)
            prefix[i] = prefix[i-1] + stoneValue[i];
        vector<vector<int> > dp(n, vector<int>(n, -1));
        return rec(dp, prefix, stoneValue, 0, n-1);
    }


int main(){
  
  return 0;
}