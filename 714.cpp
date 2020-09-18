// time - O(n)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int> > dp(n+1, vector<int> (2, 0));
         
        for(int i=1;i<=n;i++)
        {
            dp[i][0] = max(dp[i-1][0], dp[i-1][1] - fee - prices[n-i]);
            dp[i][1] = max(dp[i-1][1], dp[i-1][0] + prices[n-i]);
        }
        return dp[n][0];
    }




int main(){
  
  return 0;
}