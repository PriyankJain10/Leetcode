// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    string removeDuplicateLetters(string s) {
        int n = s.size();
        vector<int> v(26);
        for(int i=0;i<n;i++)
        {
            v[s[i] - 'a'] = i;
        }
        vector<bool> m(26, 0);
        stack <int> st;
        for(int i=0;i<n;i++)
        {
            if(m[s[i] - 'a'] == 1)
                continue;
            while(st.size() && (s[st.top()] - 'a') > (s[i] - 'a'))
            {
                if(st.top() != v[s[st.top()] - 'a'] && i < v[s[st.top()] - 'a'])
                {
                    m[s[st.top()] - 'a'] = 0;
                    st.pop();
                }
                else
                    break;
            }
            st.push(i);
            m[s[i] - 'a'] = 1;
        }
        string ans = "";
        while(st.size())
        { 
            ans = s[st.top()] + ans;
            st.pop();
        }
        return ans;
    }



int main(){
  
  return 0;
}