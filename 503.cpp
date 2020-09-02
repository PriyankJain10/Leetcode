// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n, -1);
        stack<int> s;
        for(int i=0;i<2*n;i++)
        {
            while(s.size() && nums[s.top()%n] < nums[i%n])
            {
                if(v[s.top()%n] == -1)
                {
                    v[s.top()%n] = nums[i%n]; 
                }
                s.pop();
            }
            s.push(i);
        }
        return v;
    }



int main(){
  
  return 0;
}