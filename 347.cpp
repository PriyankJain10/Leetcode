// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;


    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<2)    
            return nums;
        
        unordered_map<int, int> freq, um;
        unordered_map<int, bool> take;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        for(auto it=freq.begin(); it!=freq.end();it++)
        {
            um[it->second]++;
        }
        int count = 0;
        while(count < k)
        {
            int x = -1;
            for(auto it=um.begin();it!=um.end();it++)
            {
                if(it->second > 0 && it->first > x)
                    x = it->first;
            }
            count += um[x];
            take[x] = 1;
            um[x] = 0;
        }
        for(auto it=freq.begin();it!=freq.end();it++)
        {
            if(take[it->second])
            {
                v.push_back(it->first);
            }
        }
        return v;
    }


int main(){
  
  return 0;
}