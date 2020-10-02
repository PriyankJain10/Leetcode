// time - O(n^3)   
// space - O(4*n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int> > v;
        int n = nums.size();
        if(n<4)
            return v;
        for(int i=0;i<n-3;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            if(nums[i] + nums[n-1] + nums[n-2] + nums[n-3] < target)    
                continue;
            if(nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target)
                continue;
            
            for(int j=i+1;j<n-2;j++)
            {
                if(j > i+1 && nums[j] == nums[j-1])
                    continue;
                int l = j+1, r = n-1;
                while(l<r)
                {
                    int x = target - nums[i] - nums[j] - nums[l] - nums[r];
                    if(x == 0)
                    {
                        vector<int> temp = {nums[i], nums[j], nums[l], nums[r]};
                        if(find(v.begin(), v.end(), temp) == v.end())
                            v.push_back(temp);
                        l++;
                        r--;
                    }
                    else if(x > 0)
                        l++;
                    else
                        r--;
                }
            }
        }
        return v;
    }






int main(){
  
  return 0;
}