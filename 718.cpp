// time - O(n^2)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int findLength(vector<int>& A, vector<int>& B) {
        int n = A.size(), m = B.size();
        
        if(!n || !m)
            return 0;
        
        vector<int> dp(m+1, 0);
        int ans = 0;
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<m;j++)
            {
                if(A[i] == B[j])
                    dp[j] = dp[j+1] + 1;
                else
                    dp[j] = 0;
                ans = max(ans, dp[j]);
            }
        }
        
        return ans;
    }




int main(){
  
  return 0;
}