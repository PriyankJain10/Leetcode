// time - O(n^2)    
// space - O(n^2) 

#include<bits/stdc++.h>
using namespace std;

    
    int dp[101][101][2];
    
    int game(vector<int> &piles, int s, int n, int m, bool turn)
    {
        if(s >= n)
            return 0;
        if(dp[s][m][turn] != -1)
            return dp[s][m][turn];
        int ans, curr = 0;
        if(turn)
        {
            ans = INT_MAX;
            for(int i=0;i<2*m && s+i<=n;i++)
            {
                ans = min(ans, game(piles, s+i+1, n, max(m, i+1), 0));
            }
            dp[s][m][turn] = ans;
            return ans;
        }
        ans = 0;
        for(int i=0; i<2*m && s+i<n;i++)
        {
            curr += piles[s+i];
            ans = max(ans, curr + game(piles, s+i+1, n, max(m, i+1), 1));
        }
        dp[s][m][turn] = ans;
        return ans;
    }
    
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        memset(dp, -1, sizeof(dp));
        return game(piles, 0, n, 1, 0);
    }



int main(){
  
  return 0;
}