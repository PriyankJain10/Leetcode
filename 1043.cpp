// time - O(n)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        if(n == 1)
            return arr[0];
        vector<int> dp(n);
        for(int i=0;i<n;i++)
        {
            int curr = 0;
            for(int j=1;j<=k && j<=i+1;j++)
            {
                curr = max(curr, arr[i-j+1]);
                dp[i] = max(dp[i], (i >= j ? dp[i-j] : 0) + curr * j);
            }
        }
        return dp[n-1];
    }




int main(){
  
  return 0;
}