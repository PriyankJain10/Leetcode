// time - O(logn)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    int divide(int dividend, int divisor) {
        if(dividend == 0 || divisor == 1)
            return dividend;
        long long int flag = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        long long int ans = 0, temp = 0, d = abs(divisor), D = abs(dividend);
        for(int i=31; i>=0;i--)
        {
            if(temp + (d << i) <= D)
            {
                temp += (d << i);
                ans |= (1LL<<i);
            }
        }
        ans *= flag;
        if(ans < INT_MIN)
            return INT_MIN;
        if(ans > INT_MAX)
            return INT_MAX;
        return ans;   
    }




int main(){
  
  return 0;
}