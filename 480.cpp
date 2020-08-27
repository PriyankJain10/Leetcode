// time - O(n(logn + k))    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        multiset<double> s;
        vector<double> v(n-k+1);
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
            if(i>=k-1)
            {
                if(i >= k)
                    s.erase(s.find(nums[i-k]));
                if(k&1)
                {
                    auto it = s.begin();
                    advance(it, s.size()/2);
                    v[i-k+1] = *it;
                }
                else
                {
                    auto it = s.begin();
                    advance(it, s.size()/2);
                    v[i-k+1] = *it;
                    it--;
                    v[i-k+1] += *it;
                    v[i-k+1] /= 2.0;
                }
            }
        }
        return v;
    }


int main(){
  
  return 0;
}