// time - O(nlogn)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int> > pq;
    int K;
    KthLargest(int k, vector<int>& nums) {
        while(pq.size())
            pq.pop();
        for(int i = 0;i < nums.size(); i++)
            pq.push(nums[i]);
        while(pq.size() > k)
            pq.pop();
        K = k;
    }
    
    int add(int val) {
        if(pq.size() == K)
        {
            pq.push(val);
            pq.pop();
            return pq.top();
        }  
        pq.push(val);
        return pq.top();
    }
};




int main(){
  
  return 0;
}