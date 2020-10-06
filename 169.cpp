// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int majorityElement(vector<int>& nums) {
        int count = 1, num = nums[0];
        for(int x : nums)
        {
            if(x == num)
                count++;
            else
            {
                count--;
                if(count == 0)
                {
                    num = x;
                    count = 1;
                }
            }
        }
        return num;
    }






int main(){
  
  return 0;
}