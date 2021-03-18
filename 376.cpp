// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size(), ans = 1, curr = 1, last = nums[0];
        if(n < 2)
            return n;
        bool flag = 1;
        for(int i=1;i<n;i++)
        {
            if((nums[i] > last && flag) || (nums[i] < last && !flag))
            {
                curr++;
                ans = max(ans, curr);
                flag = !flag;
            }

            last = nums[i];
        }
        flag = 0, curr = 1, last = nums[0];
        for(int i=1;i<n;i++)
        {
            if((nums[i] > last && flag) || (nums[i] < last && !flag))
            {
                curr++;
                ans = max(ans, curr);
                flag = !flag;
            }

            last = nums[i];
        }
        return ans;
    }




int main(){
  
  return 0;
}