// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    string defangIPaddr(string address) {
        string s;
        for(char c : address)
        {
            if(c == '.')
            {
                s += "[.]";
            }
            else
                s += c;
        }
        return s;
    }






int main(){
  
  return 0;
}