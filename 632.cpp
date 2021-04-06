// time - O(m*nlog(n))   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    

    typedef vector<int> vi;
    
    vector<int> smallestRange(vector<vector<int>>& nums) {
        
        int n = nums.size();
        
        vector<int> ans = {0, INT_MAX};
        int lo = 0, hi = INT_MIN;
        
        priority_queue<vi, vector<vi>, greater<vi>> q;
        
        for(int i=0;i<n;i++)
        {
            q.push({nums[i][0], i, 0});
            hi = max(hi, nums[i][0]);
        }
        
        while(1)
        {
            int i = q.top()[1], j = q.top()[2];
            lo = q.top()[0];
            
            if(hi - lo < ans[1] - ans[0])
                ans[0] = lo, ans[1] = hi;
                
            if(j == nums[i].size()-1)
                break;
            q.pop();
            q.push({nums[i][j+1], i, j+1});
            hi = max(hi, nums[i][j+1]);
        }
        return ans;
    }




int main(){
  
  return 0;
}