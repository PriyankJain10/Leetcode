// time - O(nlogn)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<pair<int, int>> v(nums.size());
        for(int i=0;i<nums.size();i++)
            v[i] = {nums[i], i};
        
        sort(v.begin(), v.end());
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(i > 0 && v[i].first == v[i-1].first)
                ans[v[i].second] = ans[v[i-1].second];
            
            else
                ans[v[i].second] = i;
        }
        return ans;
    }





int main(){
  
  return 0;
}