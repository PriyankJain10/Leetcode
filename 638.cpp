// time - O(exponential (n))
// space - O(exponential (n))   due to recursion

#include<bits/stdc++.h>
using namespace std;

    
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        int n = needs.size(), m = special.size();
        int ans = 0;
        bool flag = 0;
        for(int i=0;i<n;i++)
        {
            if(needs[i] > 0)
            {
                flag = 1;
                ans += (price[i] * needs[i]);
            }
        }
        
        if(flag == 0)
            return 0;
        
        for(int i=0;i<m;i++)
        {
            int curr = 0, no = INT_MAX;
            bool suit = 1;
            for(int j=0;j<n;j++)
            {
                if(special[i][j] == 0)
                    continue;
                if(special[i][j] > needs[j])
                {
                    suit = 0;
                    break;
                }
                
                no = min(no, needs[j]/special[i][j]);
            }
            if(suit)
            {
                curr = no*special[i][n];
                for(int j=0;j<n;j++)
                    needs[j] -= (no*special[i][j]);
                
                curr += (shoppingOffers(price, special, needs));
                
                for(int j=0;j<n;j++)
                    needs[j] += (no*special[i][j]);
                
                ans = min(ans, curr);
            }            
        }
        return ans; 
    }




int main(){
  
  return 0;
}