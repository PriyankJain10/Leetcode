// time - O(n)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int n = nums.size(), cnt = 0;
        if(n == 1)
            return cnt;
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        
        for(int i=0;i<n;i++)
        {
            if(m[nums[i]] == 0)
                continue;
            if(k == 0 && m[nums[i]] > 1)
                cnt++;
            else if(k != 0)
            {
                if(m[nums[i] - k] > 0)
                    cnt++;
                if(m[nums[i] + k] > 0)
                    cnt++;
            }
            m[nums[i]] = 0;
        }
        
        return cnt;
    }



int main(){
  
  return 0;
}