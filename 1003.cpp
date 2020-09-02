// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        for(char c : s)
        {
            if(st.size() && c == 'c' && st.top() == 'b')
            {
                st.pop();
                if(st.size() && st.top() == 'a')
                {
                    st.pop();
                    continue;
                }
                st.push('b');
                st.push(c);
            }
            else
                st.push(c);
        }
        return st.size() == 0;
    }



int main(){
  
  return 0;
}