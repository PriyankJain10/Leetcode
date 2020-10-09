// time - O(exp(n))   
// space - O(exp(n))               

#include<bits/stdc++.h>
using namespace std;

    

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;
        vector<int> arr;
        for(int i=0;i<(1 << n);i++)
        {
            arr.clear();
            int j = 0, x = i;
            while(x)
            {
                if(x&1)
                    arr.push_back(nums[j]);
                j++, x = x>>1;
            }
            v.push_back(arr);
        }
        return v;
    }





int main(){
  
  return 0;
}