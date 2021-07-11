// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return ;
        int j = 0;
        for(int i=0;i<n;i++)
            if(nums[i] != 0)
                nums[j++] = nums[i];    
        
        for(;j<n;j++)
            nums[j] = 0;
        return;
    }



int main(){
  
  return 0;
}