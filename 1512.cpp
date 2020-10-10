// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int x : nums)
            m[x]++;
        int ans = 0;
        for(auto it : m)
        {
            int x = it.second;
            ans += ((x-1)*x)/2;
        }
        return ans;
    }





int main(){
  
  return 0;
}