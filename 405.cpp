// time - O(logn)
// space - O(1)

#include<bits/stdc++.h>
using namespace std;

    
    string toHex(int num) {
        if(num >= 0 && num < 10)
            return to_string(num);
        unsigned int n = num;
        const string h = "0123456789abcdef";
        string ans = "";
        int count = 0;
        while(n && count < 8)
        {
            count++;
            ans = h[n & 15] + ans;
            n >>= 4;
        }
        return ans;
    }




int main(){
  
  return 0;
}