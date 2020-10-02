// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v(2*n);
        int k = 0, i = 0;
        while(i<n)
        {
            v[k++] = nums[i];
            v[k++] = nums[i+n];
            i++;
        }
        return v;
    }






int main(){
  
  return 0;
}