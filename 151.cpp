// time - O(n)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;


    string reverseWords(string s) {
        string rev = "", helper = "";
        for(char c : s)
        {
            if(c == ' ')
            {
                if(helper == "")
                    continue;
                if(rev == "")
                    rev = helper;
                else
                    rev = helper + " " + rev;
                helper = "";
            }
            else
                helper += c;
        }
        if(helper != "")
        {
            if(rev == "")
                rev = helper;
            else
                rev = helper + " " + rev;
        }
        return rev;
    }



int main(){
  
  return 0;
}