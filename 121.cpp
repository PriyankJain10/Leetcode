// time - O(n)   
// space - O(1)        

#include<bits/stdc++.h>
using namespace std;

    
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2)
            return 0;
        int curr = prices[0], ans = 0;
        for(int x : prices)
        {
            ans = max(x-curr, ans);
            curr = min(curr, x);
        }
        return ans;
    }




int main(){
  
  return 0;
}