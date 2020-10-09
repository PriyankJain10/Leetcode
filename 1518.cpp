// time - O(logn)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles, empty = numBottles;
        while(empty >= numExchange)
        {
            int x = empty/numExchange, y = empty%numExchange;
            empty = y + x;
            ans += x;
        }
        return ans;
    }





int main(){
  
  return 0;
}