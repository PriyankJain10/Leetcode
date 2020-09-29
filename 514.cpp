// time - O(n^3)   
// space - O(n^2)               

#include<bits/stdc++.h>
using namespace std;

    

    long rec(vector<vector<long>> &dp, string &ring, string &key, int i, int j)
    {
        if(j == key.size())
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        long l=0, r=0;
        while(ring[(i-l+(2*ring.size()))%ring.size()] != key[j])
            l++;
        l++;
        dp[i][j] = l + rec(dp, ring, key, (i-l+1+(2*ring.size()))%ring.size(), j+1);
        
        while(ring[(i+r)%ring.size()] != key[j])
            r++;
        r++;
        dp[i][j] = min(dp[i][j],  r + rec(dp, ring, key, (i+r-1)%ring.size(), j+1));
        
        return dp[i][j];
    }
    
    int findRotateSteps(string ring, string key) {
        
        vector<vector<long>> dp(ring.size(), vector<long> (key.size(), -1));
        return rec(dp, ring, key, 0, 0);
    }






int main(){
  
  return 0;
}