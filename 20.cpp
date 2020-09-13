// time - O(n)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    bool isValid(string s) {
        stack<char> st;
        for(char c : s)
        {
            if(st.empty())
            {
                st.push(c);
                continue;
            }
            if(c == '(' || c == '[' || c == '{')
                st.push(c);
            else
            {
                if(c == ')')
                {
                    if(st.top() == '(')
                        st.pop();
                    else
                        st.push(c);
                }
                else if(c == '}')
                {
                    if(st.top() == '{')
                        st.pop();
                    else
                        st.push(c);
                }
                else
                {
                    if(st.top() == '[')
                        st.pop();
                    else
                        st.push(c);
                }
            }
        }
        return st.empty();
    }




int main(){
  
  return 0;
}