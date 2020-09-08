// time - O(logn)
// space - O(1)

#include<bits/stdc++.h>
using namespace std;

    
    bool isPerfectSquare(int num) {
        if(num<2)
            return 1;
        long long int i;
        for(i=2;i*i<num;i++);
        if(i*i == num)
            return 1;
        return 0;
    }




int main(){
  
  return 0;
}