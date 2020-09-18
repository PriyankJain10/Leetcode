// time - O(logn)
// space - O(1)

#include<bits/stdc++.h>
using namespace std;

    
    bool isPalindrome(int x) {
        if(x<0)
            return 0;
        long long int n = x, sum = 0;
        while(n)
        {
            sum = sum*10 + n%10;
            n/=10;
        }
        return sum == x;
        
    }




int main(){
  
  return 0;
}