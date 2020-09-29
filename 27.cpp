// time - O(n^2)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = 0, j = 0;
        while(i<n)
        {
            if(nums[i] == val)
            {
                j = i+1;
                while(j<n && nums[j] == val)
                    j++;
                if(j == n)
                    return i;
                swap(nums[j], nums[i]);
            }
            i++;
        }
        return i;
    }






int main(){
  
  return 0;
}