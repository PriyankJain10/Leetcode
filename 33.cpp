// time - O(n)   
// space - O(1)           

#include<bits/stdc++.h>
using namespace std;

    
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 1)
            return (target == nums[0]) ? 0 : -1;
        if(target > nums[n-1] && target < nums[0])
            return -1;
        if(target < nums[0])
        {
            int i=n-1;
            while(i > 0 && nums[i] > target)
                i--;
            if(i > 0 && nums[i] == target)
                return i;
            return -1;
        }
        
        int i=0;
        while(i < n && nums[i] < target)
            i++;
        if(i < n && nums[i] == target)
            return i;
        return -1;
    }




int main(){
  
  return 0;
}