// time - O(nlogn)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> minSubsequence(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        
        if(n == 1)
            return nums;
        if(n == 2)
        {
            if(nums[0] == nums[1])
                return nums;
            v.push_back(max(nums[0], nums[1]));
            return v;
        }
        
        int sum = 0, curr = 0;
        for(int x : nums)
            sum += x;
        sort(nums.begin(), nums.end());
        
        for(int i=n-1;i>=0;i--)
        {
            if(2*curr > sum)
                break;
            curr += nums[i];
            v.push_back(nums[i]);
        }
        return v;
    }






int main(){
  
  return 0;
}