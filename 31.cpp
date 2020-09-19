// time - O(nlogn)   
// space - O(1)        

#include<bits/stdc++.h>
using namespace std;

    
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), j = 0;
        bool flag = 1;
        while(j+1<n)
        {
            if(nums[j] < nums[j+1])
            {
                flag = 0;
                break;
            }
            j++;
        }
        if(flag)
        {
            reverse(nums.begin(), nums.end());
            return ;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i] < nums[i+1])
            {
                int m = i+1;
                for(int j=i+1;j<n;j++)
                {
                    if(nums[j] > nums[i])
                        m = (nums[m] > nums[j] ? j : m);
                }
                swap(nums[m], nums[i]);
                sort(nums.begin()+i+1, nums.end());
                return;
            }
        }
        return ;
    }




int main(){
  
  return 0;
}