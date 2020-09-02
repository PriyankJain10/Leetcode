// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for(char c : s)
        {
            if(st.size() && st.top().first == c)
            {
                if(st.top().second+1 == k)
                {
                    while(st.size() && st.top().first == c)
                        st.pop();
                }
                else
                    st.push({c, st.top().second + 1});
            }
            else
                st.push({c, 1});
        }
        string ans = "";
        while(st.size())
        {
            ans = st.top().first + ans;
            st.pop();
        }
        return ans;
    }



int main(){
  
  return 0;
}