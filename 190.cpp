// time - O(logn)
// space - O(1)

#include<bits/stdc++.h>
using namespace std;

    
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for(int i=0;i<32;i++)
        {
            if(n&(1<<i))
            {
                ans += (1<<(32-i-1));
            }
        }
        return ans;
    }




int main(){
  
  return 0;
}