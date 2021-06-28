// time - O(n)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n < 2)
            return n;
        
        unordered_set<int> s;
        for(int i : nums)
            s.insert(i);
        
        int ans = 1;
        while(s.size())
        {
            int curr = *s.begin(), cnt = 1;
            s.erase(curr);
            int lo = curr-1, hi = curr+1;
            while(s.find(lo) != s.end())
            {
                s.erase(lo);
                cnt++, lo--;
            }
            while(s.find(hi) != s.end())
            {
                s.erase(hi);
                cnt++, hi++;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }



int main(){
  
  return 0;
}