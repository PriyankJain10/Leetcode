// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    bool backspaceCompare(string S, string T) {
        stack<char> s, t;
        for(char c : S)
        {
            if(c == '#')
            {
                if(s.size())
                    s.pop();
            }
            else
                s.push(c);
        }
        for(char c : T)
        {
            if(c == '#')
            {
                if(t.size())
                    t.pop();
            }
            else
                t.push(c);
        }
        if(s.size() != t.size())
            return 0;
        while(s.size())
        {
            if(s.top() != t.top())
                return 0;
            s.pop();
            t.pop();
        }
        return 1;
    }


int main(){
  
  return 0;
}