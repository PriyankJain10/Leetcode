// time - O(exp(n))   
// space - O(exp(n))               

#include<bits/stdc++.h>
using namespace std;

    

    bool isValid(string s, int n)
    {
        int o = 0, t = 0;
        for(char c : s)
        {
            if(c == '(')
                o++;
            else
            {
                if(t >= o)
                    return 0;
                t++;
            }
        }
        return 1;
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s = "";
        for(int i=0;i<n;i++)
            s += "()";
        
        sort(s.begin(), s.end());
        if(isValid(s, n))
            v.push_back(s);
        while(next_permutation(s.begin(), s.end()))
        {
            if(isValid(s, n))
                v.push_back(s);
        }
        return v;
    }





int main(){
  
  return 0;
}