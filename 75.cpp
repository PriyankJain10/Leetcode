// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    void sortColors(vector<int>& nums) {
        int n0 = 0, n1 = 0, n2 = 0;
        for(int x : nums)
        {
            if(x == 0)
                n0++;
            else if(x == 1)
                n1++;
            else
                n2++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(n0)
            {
                nums[i] = 0;
                n0--;
            }
            else if(n1)
            {
                nums[i] = 1;
                n1--;
            }
            else
            {
                nums[i] = 2;
            }
        }
        return ;
    }






int main(){
  
  return 0;
}