// time - O(n)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
    int minSubArrayLen(int s, vector<int>& nums) {
        int sum = 0, n = nums.size(), i = 0, j = 0, ans = INT_MAX, flag = 0;
        while(j<n)
        {
            sum += nums[j];
            while(sum >= s)
            {
                flag = 1;
                ans = min(ans, j - i + 1);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        if(flag)
            return ans;
        return 0;    
    }


int main(){
  
  return 0;
}