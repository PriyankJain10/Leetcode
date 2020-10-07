// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    string minRemoveToMakeValid(string s) {
        int o = 0, c = 0, n = s.size();
        string a = "";
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
                o++;
            
            else if(s[i] == ')')
                if(o > c)
                    c++;
        }
        o = c;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                if(o > 0)
                {
                    a += s[i];
                    o--;
                }
            }
            else if(s[i] == ')')
            {
                if(c > 0 && o < c)
                {
                    a += s[i];
                    c--;
                }
            }
            else
                a += s[i];
        }
        return a;
    }






int main(){
  
  return 0;
}