// time - O(n^2)   
// space - O(1)        

#include<bits/stdc++.h>
using namespace std;

    
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;
        if(n<3)
            return v;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            int a = i+1, b = n-1;
            while(a < b)
            {
                int p = nums[i], q = nums[a], r = nums[b], curr = p+q+r;
                if(curr == 0)
                {
                    v.push_back({p, q, r});
                    int temp = q;
                    while(nums[a] == temp && a < b)
                        a++;
                    temp = r;
                    while(nums[b] == temp && a < b)
                        b--;
                }
                else if(curr < 0)
                    a++;
                else 
                    b--;
            }
        }
        return v;
    }




int main(){
  
  return 0;
}