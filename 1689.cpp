// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    int minPartitions(string n) {
        int ans = 0;
        for(char c : n)
        {
            if(c == '9')
                return 9;
            if(ans < (c - '0'))
                ans = (c - '0');
        }
        return ans;
    }




int main(){
  
  return 0;
}