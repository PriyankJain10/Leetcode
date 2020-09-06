// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    bool find132pattern(vector<int>& nums) {
        int n = nums.size(), last = INT_MIN;
        stack<int> s;
        for(int i = n-1; i >= 0; i--)
        {
            if(nums[i] < last)
                return 1;
            else
            {
                while(s.size() && nums[i] > s.top())
                {
                    last = s.top();
                    s.pop();
                }
            }
            s.push(nums[i]);
        }
        return 0;
    }



int main(){
  
  return 0;
}