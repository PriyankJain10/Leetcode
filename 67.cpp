// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    string addBinary(string a, string b) {
        int c = 0, n = a.size(), m = b.size();
        if(n > m)
        {
            for(int i=0;i<m;i++)
            {
                int x = (a[n-1-i] - '0') + (b[m-1-i] - '0') + c;
                c = x/2;
                if(x%2)
                    a[n-i-1] = '1';
                
                else
                    a[n-i-1] = '0';
            }
            int i = m;
            while(c)
            {
                int x = c;
                if(i < n)
                {
                    x += a[n-i-1] - '0';
                    c = x/2;
                    a[n-i-1] = ((x == 2) ? '0' : '1');
                }
                else
                {
                    a = "1" + a;
                    return a;
                }
                i++;
            }
            return a;
        }
        
        for(int i=0;i<n;i++)
        {
            int x = (a[n-1-i] - '0') + (b[m-1-i] - '0') + c;
            c = x/2;
            if(x%2)
                b[m-i-1] = '1';

            else
                b[m-i-1] = '0';
        }
        int i = n;
        while(c)
        {
            int x = c;
            if(i < m)
            {
                x += b[m-i-1] - '0';
                c = x/2;
                b[m-i-1] = ((x == 2) ? '0' : '1');
            }
            else
            {
                b = "1" + b;
                return b;
            }
            i++;
        }
        return b;
        
        
    }





int main(){
  
  return 0;
}