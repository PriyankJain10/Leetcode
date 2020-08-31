// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    int trap(vector<int>& heights) {
        int n = heights.size();
        if(n<3)
            return 0;
        vector<int> r(n), l(n);
        l[0] = heights[0];
        r[n-1] = heights[n-1];
        for(int i=1;i<n;i++)
        {
            l[i] = max(l[i-1], heights[i]);
            r[n-1-i] = max(r[n-i], heights[n-i-1]);
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ans += min(l[i], r[i]) - heights[i];
        }
        return ans;
    }

int main(){
  
  return 0;
}