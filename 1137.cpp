// time - O(n)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;


    int tribonacci(int n) {
        if(n < 2)
            return n;
        if(n == 2)
            return 1;
        int a = 0, b = 1, c = 1, sum;
        for(int i=3;i<=n;i++)
        {
            sum = a + b + c;
            a = b;
            b = c;
            c = sum;
        }
        return sum;
    }


int main(){
  
  return 0;
}