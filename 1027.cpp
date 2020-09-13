// time - O(n^2)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    int longestArithSeqLength(vector<int>& A) {
        int n=A.size(),ans=0;
        int maxval=0;
        for(int a:A)
            maxval=max(a,maxval);
        vector<vector<int>> dp(2*maxval+1,vector<int>(n,0));
        
        for(int i=1;i<n;++i)
            for(int j=0;j<i;++j)
            {
                int dif=A[i]-A[j]+maxval;
                dp[dif][i]=dp[dif][j]+1;
                ans=max(ans,dp[dif][i]);
                
            }
        return ans+1;
    }




int main(){
  
  return 0;
}