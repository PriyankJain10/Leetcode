// time - O(n)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    
    int numDecodings(string s) {
        
        int n = s.size();
        vector<int> dp(n+1);
        
        dp[n] = 1;
        if(s[n-1] != '0')
            dp[n-1] = 1;
        
        for(int i=n-2; i>=0; i--)
        {
            if(s[i] == '0')
                continue;
            
            dp[i] = dp[i+1];
            
            if(s[i] == '1' || (s[i] == '2' && s[i+1] < '7'))
                dp[i] += dp[i+2];
        }
        return dp[0];
    }



int main(){
  
  return 0;
}