// time - O(n^2)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size(), ans = nums[0] + nums[1] + nums[2];;
        if(n == 3 || ans == target)
            return ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++)
        {
            int t = target - nums[i], lo = i+1, hi = n-1;
            while(lo < hi)
            {
                int curr_sum = nums[lo] + nums[hi];
                if(abs(ans - target) > abs(nums[i] + curr_sum - target))
                    ans = curr_sum + nums[i];
                if(curr_sum == t)
                    break;
                else if(curr_sum > t)
                    hi--;
                else
                    lo++;
            }
        }
        return ans;
    }




int main(){
  
  return 0;
}