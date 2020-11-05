// time - O(n!)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    void rec(vector<vector<int>> &v, vector<int> &nums, int l, int r)
    {
        if(l == r)
        {
            v.push_back(nums);
            return ;
        }
        
        for(int i=l;i<=r;i++)
        {
            swap(nums[l], nums[i]);
            
            rec(v, nums, l+1, r);
            
            swap(nums[l], nums[i]);
        }
        return ;
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        int n = nums.size();
        rec(v, nums, 0, n-1);
        return v;
    }




int main(){
  
  return 0;
}