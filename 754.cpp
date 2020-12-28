// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int reachNumber(int target) {
        long long int sum = 0, i = 1;
        while(i <= INT_MAX)
        {
            sum += i;
            if(sum >= abs(target) && (sum - target)%2 == 0)
                return i;
            i++;
        }
        return 0;
    }




int main(){
  
  return 0;
}