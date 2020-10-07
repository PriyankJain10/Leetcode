// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int balancedStringSplit(string s) {
        int count = 0, val = 0;
        for(char c : s)
        {
            if(c == 'L')
                val++;
            else
                val--;
            if(val == 0)
                count ++;
        }
        return count;
    }






int main(){
  
  return 0;
}