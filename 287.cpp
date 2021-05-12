// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int tortoise = nums[0], hare = nums[0];
        
        do{
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        }while(tortoise != hare);
        
        tortoise = nums[0];
        while(tortoise != hare)
        {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }
        return hare;
    }




int main(){
  
  return 0;
}