// time - O(nlogn)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;


    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.size() < 2)
            return 0;
        vector<int> v = nums;
        sort(v.begin(), v.end());
        
        int i = 0, j = nums.size()-1;
        while(i<nums.size() && v[i] == nums[i])
            i++;
        while(j>=0 && v[j] == nums[j])
            j--;
        return max(0, j-i+1);
    }


int main(){
  
  return 0;
}