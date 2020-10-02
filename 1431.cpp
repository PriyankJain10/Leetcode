// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int hi = candies[0];
        for(int x : candies)
            hi = max(hi, x);
        vector<bool> v(candies.size(), 0);
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i] + extraCandies >= hi)
                v[i] = 1;
        }
        return v;
    }






int main(){
  
  return 0;
}