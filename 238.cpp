// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n, 1);
        for(int i=n-2;i>=0;i--)
            v[i] = v[i+1]*nums[i+1];
        int prefix = 1;
        for(int i=1;i<n;i++)
        {
            prefix *= nums[i-1];
            v[i] *= prefix;
        }
        return v;
    }




int main(){
  
  return 0;
}