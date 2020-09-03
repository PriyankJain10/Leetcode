// time - O(2^n)    
// space - O(2^n) 

#include<bits/stdc++.h>
using namespace std;

    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int> > ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0;i<(1<<n);i++)
        {
            vector<int> v;
            for(int j=0;j<n;j++)
            {
                if((i>>j)&1)
                    v.push_back(nums[j]);
            }
            if(find(ans.begin(), ans.end(), v) == ans.end())
                ans.push_back(v);
        }
        return ans;
    }



int main(){
  
  return 0;
}