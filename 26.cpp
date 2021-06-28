// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), i = 1, j = 1;
        if(n < 2)
            return n;
        while(j < n)
        {
            if(nums[i] <= nums[i-1])
            {
                while(j < n && nums[j] <= nums[i-1])
                    j++;
                if(j == n)
                    break;
                nums[i] = nums[j];
            }
            i++, j++;
        }
        return i;
    }



int main(){
  
  return 0;
}