// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        if(n < 4)
        {
            int ans = nums[0];
            for(int i=1;i<n;i++)
                ans = max(ans, nums[i]);
            return ans;
        }
        vector<vector<int> > dp(2, vector<int> (n, 0));
        dp[0][0] = nums[0];
        dp[0][1] = nums[1];
        dp[1][1] = nums[1];
        int ans = 0;
        for(int i=2;i<n;i++)
        {
            if(i != n-1)
            {
                dp[0][i] = dp[0][i-2];
                if(i>2)
                    dp[0][i] = max(dp[0][i], dp[0][i-3]);
                dp[0][i] += nums[i];
                ans = max(ans, dp[0][i]);
            }
            
            dp[1][i] = dp[1][i-2];
            if(i>2)
                dp[1][i] = max(dp[1][i], dp[1][i-3]);
            dp[1][i] += nums[i];
            ans = max(dp[1][i], ans);
        }
        return ans;
    }





int main(){
  
  return 0;
}