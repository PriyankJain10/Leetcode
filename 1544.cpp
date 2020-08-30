// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    string makeGood(string s) {
        stack<char> a;
        for(char c : s)
        {
            if(a.empty())
            {
                a.push(c);
                continue;
            }

           if((c - 'a') == (a.top() - 'A') || (c - 'A') == (a.top() - 'a'))
                a.pop();
            else
                a.push(c);
        }
        string temp = "";
        while(a.size())
        {
            temp = a.top() + temp;
            a.pop();
        }
        return temp;
    }


int main(){
  
  return 0;
}