// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int jump(vector<int>& nums) {
        if(nums.size() < 2)
            return 0;
        if(nums.size() == 2 || nums[0] >= nums.size()-1)
            return 1;
        int count = 0, curr = 0, i = 0, hi = 0;
        bool flag = 0;
        while(curr - i + 1)
        {
            count++;
            for(;i<=curr;i++)
            {
                hi = max(hi, i + nums[i]);
                if(hi >= nums.size()-1)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag)
                break;
            curr = hi;
        }
        return count;
    }






int main(){
  
  return 0;
}