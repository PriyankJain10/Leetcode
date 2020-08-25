// time - O(n)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;


    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(piles.begin(), piles.end());
        int i = 0, j = n-2;
        int sum = 0;
        while(i < j)
        {
            sum += piles[j];
            j-=2;
            i++;
        }
        return sum;
    }


int main(){
  
  return 0;
}