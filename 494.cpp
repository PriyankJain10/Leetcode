// time - O(n*2000)   
// space - O(n*2000)               

#include<bits/stdc++.h>
using namespace std;

    

    int rec(vector<vector<int> > &dp, vector<int> &nums, int t, int sum, int i)
    {
        if(i == nums.size())
            return (int)(sum == t);
        if(dp[sum+1001][i] != -1)
            return dp[sum+1001][i];
        dp[sum+1001][i] = rec(dp, nums, t, sum+nums[i], i+1) + rec(dp, nums, t, sum-nums[i], i+1);
        return dp[sum+1001][i];
    }
    
    int findTargetSumWays(vector<int>& nums, int S) {        
        vector<vector<int> > dp(2005, vector<int> (nums.size(), -1));
        
        return rec(dp, nums, S, 0, 0);
    }






int main(){
  
  return 0;
}