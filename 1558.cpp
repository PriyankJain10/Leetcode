// time - O(nlogn)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;


    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int two = 0, one = 0;
        for(int i=0;i<n;i++)
        {
            int x = nums[i];
            int t = 0;
            while(x > 0)
            {
                if(x % 2)
                {
                    x--;
                    one++;
                }
                else
                {
                    x/=2;
                    t++;
                }
            }
            two = max(t, two);
        }
        return one + two;
    }


int main(){
  
  return 0;
}