// time - O(exp(n))   
// space - O(n)        

#include<bits/stdc++.h>
using namespace std;

    
    vector<string> keypad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    void rec(vector<string> &v, string &s, string curr, int n, int i)
    {
        if(n == 0)
        {
            v.push_back(curr);
            return ;
        }
        if(keypad[s[i] - '0'] == "")
        {
            return rec(v, s, curr, n-1, i+1);
        }
        for(int j=0;j<keypad[s[i] - '0'].size();j++)
        {
            rec(v, s, curr + keypad[s[i] - '0'][j], n-1, i+1);
        }
        return ;
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> v;
        int n = digits.size();
        if(digits == "")
        {
            return v;
        }
        rec(v, digits, "", n, 0);
        return v;
    }




int main(){
  
  return 0;
}