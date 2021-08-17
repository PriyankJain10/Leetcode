// time - O(n)   
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;


    vector<int> minOperations(string boxes) {
        int n = boxes.size(), ops = 0, left = ((boxes[0] == '1') ? 1 : 0);
        vector<int> r(n), ans(n);
        for(int i=n-1;i>=0;i--)
        {
            if(boxes[i] == '1' && i > 0)
                ops += i;
            if(boxes[i] == '1')
                r[i] = 1;
            if(i < n-1)
                r[i] += r[i+1];
        }
        
        ans[0] = ops;
        
        for(int i=1;i<n;i++)
        {
            ops += left - r[i];
            ans[i] = ops;
            if(boxes[i] == '1')
                left++;
        }
        return ans;
    }


int main(){
  
  return 0;
}