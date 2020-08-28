// time - O(nlogn)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int i=0;i<n;i+=2)
            sum += nums[i];
        return sum;
    }


int main(){
  
  return 0;
}