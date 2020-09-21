// time - O(n)   
// space - O(1)        

#include<bits/stdc++.h>
using namespace std;

    
    int removeDuplicates(vector<int>& nums) {
        int len = 0, curr = 0, i = 0, j = 0, n = nums.size();
        if(n < 3)
            return n;
        while(j<n)
        {
            if(i>0 && nums[j] == nums[i-1])
                curr++;
            if(curr > 2)
            {
                j++;
                while(j<n && nums[j] <= nums[j-1])
                    j++;
                if(j == n)
                    break;
                curr = 0;
                continue;
            }
            len++;
            swap(nums[i], nums[j]);
            curr = 1;
            if(i > 0 && nums[i] == nums[i-1])
                curr++;
            i++;
            j++;
        }
        return len;
    }




int main(){
  
  return 0;
}