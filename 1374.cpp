// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    string generateTheString(int n) {
        if(n == 0)
            return "";
        if(n%2)
        {
            return "c" + generateTheString(n-1);
        }
        string ans = "";
        for(int i=0;i<n-1;i++)
            ans += 'a';
        ans += 'b';
        return ans;
    }





int main(){
  
  return 0;
}