// time - O(logn)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        if(nums.size() == 0 || nums[0] > target || nums[nums.size()-1] < target)
        {
            v.push_back(-1);
            v.push_back(-1);        
            return v;
        }
        
        int i = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if(nums[i] != target)
        {
            v.push_back(-1);
            v.push_back(-1);    
            return v;
        }
        
        int j = lower_bound(nums.begin(), nums.end(), target+1) - nums.begin();
        
        v.push_back(i);
        v.push_back(j-1);
        return v;
    }




int main(){
  
  return 0;
}