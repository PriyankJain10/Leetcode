// time - O(nlogn)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    string removeOuterParentheses(string S) {
        int n = S.size();
        vector<int> v;
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            if(s.empty())
                s.push(i);
            else
            {
                if(S[s.top()] == '(' && S[i] == ')')
                {
                    int x = s.top();
                    s.pop();
                    if(!s.empty())
                    {
                        v.push_back(x);
                        v.push_back(i);
                    }
                }
                else
                {
                    s.push(i);
                }
            }
        }
        sort(v.begin(), v.end());
        string temp = "";
        for(int i=0;i<v.size();i++)
        {
            temp += S[v[i]];
        }
        return temp;
    }


int main(){
  
  return 0;
}