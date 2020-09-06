// time - O(logn)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
    bool isUgly(int n) {
        if(n <= 0)
            return 0;
        while(n>1)
        {
            if(n%2 && n%5 && n%3)
                return 0;
            if(n%2 == 0)
                n/=2;
            else if(n%3 == 0)
                n/=3;
            else 
                n/=5;
        }
        return 1;
    }




int main(){
  
  return 0;
}