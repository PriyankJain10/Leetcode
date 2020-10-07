// time - O(exp(n))   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    void rec(vector<string> &v, unordered_map<string, bool> &m, string &s)
    {
        if(m[s] == 0)
        {
            m[s] = 1;
            v.push_back(s);
        }
        else
            return ;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = ('A' + (s[i] - 'a'));
                rec(v, m, s);
                s[i] = ('a' + (s[i] - 'A'));
            }
        }
        return ;
    }
    
    vector<string> letterCasePermutation(string S) {
        vector<string> v;
        string s = "";
        unordered_map<string, bool> m;
        int cnt = 0;
        for(char c : S)
        {   
            if(c >= 'a' && c <= 'z')
            {
                s += c;   
                cnt++;
            }
            else if(c >= 'A' && c <= 'Z')
            {
                s += ('a' + (c - 'A'));
                cnt++;
            }
            else
                s += c;
        }
        if(cnt == 0)
        {
            v.push_back(S);
            return v;
        }
        rec(v, m, s);
        return v;
    }






int main(){
  
  return 0;
}