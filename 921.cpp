// time - O(n)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

int minAddToMakeValid(string S) 
{
        stack<char> v;
        int n = S.size();
        if(n == 0)
            return 0;
        v.push(S[0]);
        for(int i=1;i<n;i++)
        {
            char c = S[i];
            if(c == '(')
                v.push(c);
            else
            {
                if(v.empty() || v.top() != '(')
                    v.push(c);
                else v.pop();
            }
        }
        return v.size();
}

int main ()
{
    return 0;
}