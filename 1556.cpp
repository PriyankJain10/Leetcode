// time - O(n^2)    due to substr function
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;


    string thousandSeparator(int n) {
        string s = to_string(n);
        n = s.size();
        if(n<=3)    
            return s;
        int i = n;
        while(i > 0)
        {
            i-=3;
            if(i <= 0)
                break;
            s = s.substr(0, i) + "." + s.substr(i);
        }
        return s;
    }


int main(){
  
  return 0;
}