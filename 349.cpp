// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        for(int i : nums1)
            m[i] = 1;
        vector<int> ans;
        for(int i : nums2)
        {
            if(m[i] != 1)
                continue;
            m[i]--;
            if(m[i] == 0)
                ans.push_back(i);
        }
        return ans;
    }






int main(){
  
  return 0;
}