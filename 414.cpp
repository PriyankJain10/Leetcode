// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    


    int thirdMax(vector<int>& nums) {
        int m1 = INT_MIN, m2 = INT_MIN, m3 = INT_MIN;
        bool f1 = 0, f2 = 0, f3 = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == INT_MIN)
            {
                if(!f1)
                    f1 = 1;
                else if(!f2 && m1 > nums[i])
                    f2 = 1;
                else if(!f3 && m2 > nums[i])
                    f3 = 1;
                continue;
            }
            if(nums[i] > m1)
            {
                if(f1)
                {
                    if(f2)
                    {
                        f3 = 1;
                        m3 = m2;
                        m2 = m1;
                        m1 = nums[i];
                    }
                    else
                    {
                        m2 = m1;
                        m1 = nums[i];
                        f2 = 1;
                    }
                }
                else
                {
                    m1 = nums[i];
                    f1 = 1;
                }
            }
            
            else if(nums[i] > m2 && nums[i] < m1)
            {
                if(f2)
                {
                    f3 = 1;
                    m3 = m2;
                    m2 = nums[i];
                }
                else
                {
                    f2 = 1;
                    m2 = nums[i];
                }
            }
            
            else if(nums[i] > m3 && nums[i] < m2)
            {
                f3 = 1;
                m3 = nums[i];
            }
        }
        return f3 ? m3 : m1;
    }




int main(){
  
  return 0;
}