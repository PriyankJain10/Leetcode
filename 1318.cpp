// time - O(logn)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    int minFlips(int a, int b, int c) {
        int count = 0;
        for(int i=0;i<32;i++)
        {
            int x = (a&(1<<i)), y = (b&(1<<i)), z = (c&(1<<i));
            if(z)
            {
                if(x || y)
                    continue;
                count++;
            }
            else
            {
                if(x && y)
                {
                    count+=2;
                    continue;
                }
                if(x || y)
                    count++;
            }
        }
        return count;
    }




int main(){
  
  return 0;
}