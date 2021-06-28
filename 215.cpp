// time - O(nlogK)   
// space - O(K)              

#include<bits/stdc++.h>
using namespace std;

    
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<n;i++)
        {
            if(i < k)
                pq.push(nums[i]);
            else
            {
                if(pq.top() < nums[i])
                {
                    pq.pop();
                    pq.push(nums[i]);
                }
            }
        }
        return pq.top();
    }



int main(){
  
  return 0;
}