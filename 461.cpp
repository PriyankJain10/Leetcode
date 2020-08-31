// time - O(log(max(x, y)))    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
    int hammingDistance(int x, int y) {
        int ans = 0;
        while(x || y)
        {
            if((x&1) != (y&1))
                ans++;
            x = x>>1;
            y = y>>1;
        }
        return ans;
    }

int main(){
  
  return 0;
}