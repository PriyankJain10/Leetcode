// time - O(n^2)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    string reverseParentheses(string s) {
        int n = s.size();
        if(n<2)
            return s;
        stack<string> rev;
        string curr = "";
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                rev.push(curr);
                curr = "";
            }
            else if(s[i] == ')')
            {
                reverse(curr.begin(), curr.end());
                string t = rev.top();
                rev.pop();
                t += curr;
                curr = t;
            }
            else
                curr += s[i];
        }
        return curr;
    }


int main(){
  
  return 0;
}