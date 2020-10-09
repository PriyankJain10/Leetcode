// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    bool lemonadeChange(vector<int>& bills) {
        int n5 = 0, n10 = 0;
        for(int x : bills)
        {
            if(x == 10)
            {
                n10++;
                if(n5)
                    n5--;
                else
                    return 0;
            }
            else if(x == 20)
            {
                if(n10 && n5)
                    n10--, n5--;
                else if(n5 > 2)
                    n5 -= 3;
                else
                    return 0;
            }
            else
                n5++;
        }
        return 1;
    }





int main(){
  
  return 0;
}