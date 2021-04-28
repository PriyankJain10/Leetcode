// time - O(exp(n))   
// space - O(exp(n))              

#include<bits/stdc++.h>
using namespace std;

    

    void rec(unordered_set<string> &st, const string &s, string curr, int i, int n, int l, int r, int pair)
    {
        if(i == n)
        {
            if(l == 0 && r == 0 && pair == 0)
                st.insert(curr);
            return ;
        }
        if(s[i] == '(')
        {
            if(l > 0)
                rec(st, s, curr, i+1, n, l-1, r, pair);
            rec(st, s, curr + s[i], i+1, n, l, r, pair+1);
        }
        else if(s[i] == ')')
        {
            if(r > 0)
                rec(st, s, curr, i+1, n, l, r-1, pair);
            if(pair > 0)
                rec(st, s, curr + s[i], i+1, n, l, r, pair-1);
        }
        else 
            rec(st, s, curr + s[i], i+1, n, l, r, pair);
        return;
    }
    
    vector<string> removeInvalidParentheses(string s) {
        int l = 0, r = 0, n = s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(')
                l++;
            else if(s[i] == ')')
            {
                if(l > 0)
                    l--;
                else 
                    r++;
            }
        }
        
        unordered_set<string> st;
        rec(st, s, "", 0, n, l, r, 0);
        vector<string> v(st.begin(), st.end());
        return v;
    }




int main(){
  
  return 0;
}