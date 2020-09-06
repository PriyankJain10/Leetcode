// time - O(nlogn)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++)
            pq.push(stones[i]);
        while(pq.size() > 1)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x == y)
                continue;
            pq.push(x - y);
        }
        if(pq.size())
            return pq.top();
        return 0;
    }



int main(){
  
  return 0;
}