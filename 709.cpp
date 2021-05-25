// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = (char) ('a' + (s[i] - 'A'));
            }
        } 
        return s;
    }




int main(){
  
  return 0;
}