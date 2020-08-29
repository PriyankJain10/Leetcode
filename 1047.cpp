// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    string removeDuplicates(string S) {
        int n = S.size();
        if(n < 2)
            return S;
        stack<char> s;
        for(int i=0;i<n;i++)
        {
            if(s.empty() || s.top() != S[i])
                s.push(S[i]);
            else if(!s.empty() && s.top() == S[i])
                s.pop();
        }
        string temp = "";
        while(!s.empty())
        {
            temp = s.top() + temp;
            s.pop();
        }
        return temp;
    }


int main(){
  
  return 0;
}