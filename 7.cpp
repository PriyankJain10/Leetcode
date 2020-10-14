// time - O(logn)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int reverse(int x) {
        long long int a = abs(x), b = abs(x), ans = 0;
        while(a)
        {
            ans = ans*10 + a % 10;
            a /= 10;
        }
        if(x != b)
        {
            ans = -ans;
            if(ans < INT_MIN)
                return 0;
            return ans;
        }
        if(ans > INT_MAX)
            return 0;
        return ans;
        
    }




int main(){
  
  return 0;
}