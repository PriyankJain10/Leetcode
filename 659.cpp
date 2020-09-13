// time - O(n)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    bool isPossible(vector<int>& nums) {
        int n = nums.size();
        if(n < 3)
            return 0;
        bool flag = 1;
        unordered_map<int, int> m;
        for(int i=0;i<n;i++)
        {
            if(i > 0 && nums[i] != nums[i-1] + 1)
                flag = 0;
            m[nums[i]]++;
        }
        if(flag)
            return 1;
        unordered_map<int, int> seq;
        for(int i=0;i<n;i++)
        {
            if(m[nums[i]] == 0)
                continue;
            m[nums[i]]--;
            if(seq[nums[i]-1]>0)
            {
                seq[nums[i]-1]--;
                seq[nums[i]]++;
            }
            else if(m[nums[i]+1] && m[nums[i]+2])
            {
                m[nums[i]+1]--;
                m[nums[i]+2]--;
                seq[nums[i]+2]++;
            }
            else return 0;
        }
        return 1;
    }




int main(){
  
  return 0;
}