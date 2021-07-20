// time - O(n)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    vector<int> ori, shuf;
    
    Solution(vector<int>& nums) {
        ori = nums, shuf = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return ori;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        int n = rand()%ori.size();
        for(int i=0;i<n;i++)
            next_permutation(shuf.begin(), shuf.end());
        return shuf;
    }
};



int main(){
  
  return 0;
}