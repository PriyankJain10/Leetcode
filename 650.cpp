// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int rec(int n, vector<int> &dp)
    {
        if(n == 1)
            return 0;
        if(n < 4)
            return n;
        if(dp[n] > 0)
            return dp[n];
        dp[n] = n;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                dp[n] = min(i + rec(n/i, dp), dp[n]);
                break;
            }
        }
        return dp[n];
    }
    
    int minSteps(int n) {
        if(n == 1)
            return 0;
        if(n < 4)
            return n;
        vector<int> dp(n+1);
        return rec(n, dp);
    }





int main(){
  
  return 0;
}