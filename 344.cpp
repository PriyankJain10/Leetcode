// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    void reverseString(vector<char>& s) {
        int n = s.size();
        if(n<2)
            return ;
        char t;
        for(int i=0;i<n/2;i++)
        {
            t = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = t;
        }
        return ;
    }






int main(){
  
  return 0;
}