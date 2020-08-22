// time - O(n)
// space - O(n)   

#include<bits/stdc++.h>
using namespace std;


    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(m[nums[i]] > 0 && i - m[nums[i]] + 1 <= k)
            {
                return 1;
            }
            m[nums[i]] = i+1;
        }
        return 0;
    }


int main(){
  
  return 0;
}