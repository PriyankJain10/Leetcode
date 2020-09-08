// time - O(logn)
// space - O(1)

#include<bits/stdc++.h>
using namespace std;

    
    int rangeBitwiseAnd(int m, int n) {
        if(m == 0)
            return 0;
        if(n == m)
            return m;
        long long int ans = 0, x, y;
        if(n-m < 10)
        {
            ans = m;
            for(x=m+1;x<=n;x++)
                ans = ans&x;
            return ans;
        }
        while(1)
        {
            int i = 0;
            bool flag = 0;
            x = 1, y = 2;
            while(i < 32 && ans + x <= m)
            {   
                x = (1<<i), y = (1<<(i+1));
                if(ans + x <= m && ans + y > n)
                {
                    flag = 1;
                    break;
                }
                i++;
            }
            if(flag)
                ans += x;
            else
                break;
        }
        return ans;
    }




int main(){
  
  return 0;
}