// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    string entityParser(string text) {
        int n = text.size();
        string ans = "";
        int i = 0;
        while(i < n)
        {
            if(i+3 < n && text[i] == '&')
            {
                if(text.substr(i, 4) == "&gt;")
                {
                    ans += ">";
                    i+=4;
                }
                else if(text.substr(i, 4) == "&lt;")
                {
                    ans += "<";
                    i+=4;
                }
                else if(i+4 < n && text.substr(i, 5) == "&amp;")
                {
                    ans += "&";
                    i+=5;
                }
                else if(i+5 < n && text.substr(i, 6) == "&quot;")
                {
                    ans += '"';
                    i+=6;
                }
                else if(i+5 < n && text.substr(i, 6) == "&apos;")
                {
                    ans += "'";
                    i+=6;
                }
                else if(i+6 < n && text.substr(i, 7) == "&frasl;")
                {
                    ans += "/";
                    i+=7;
                }
                else
                   ans += text[i++]; 
                
            }
            else
            {
                ans += text[i++];
            }
        }
        return ans;
    }


int main(){
  
  return 0;
}