// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        stack<int> s;
        for(int x : nums2)
        {
            while(s.size() && s.top() < x)
            {
                m[s.top()] = x;
                s.pop();
            }
            s.push(x);
        }
        vector<int> v(nums1.size(), -1);
        int i = 0;
        for(int x : nums1)
        {
            if(m[x] > x)
                v[i] = m[x];
            i++;
        }
        return v;
    }


int main(){
  
  return 0;
}