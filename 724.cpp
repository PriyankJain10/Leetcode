// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    
    int pivotIndex(vector<int>& nums) {
        int sum = 0, n = nums.size();
        if(n < 3)
            return -1;
        for(int i=0;i<n;i++)
            sum += nums[i];
        int curr = 0;
        for(int i=0;i<n;i++)
        {
            int new_sum = sum - nums[i];
            if(2*curr == new_sum)
                return i;
            curr += nums[i];
        }
        return -1;
    }



int main(){
  
  return 0;
}