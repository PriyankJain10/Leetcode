// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0, curr = prices[0];
        for(int i=1;i<n;i++)
        {
            ans += max(0, prices[i] - curr);
            curr = prices[i];
        }
        return ans;
    }



int main(){
  
  return 0;
}