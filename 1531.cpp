// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    int minInsertions(string S) {
        int n = S.size(), ans = 0;
        stack<int> s;
        for(char c : S)
        {
            if(c == '(')
            {
                if(s.empty())
                {
                    s.push(2);
                    continue;
                }
                if(s.top() == 1)
                {
                    ans++;
                    s.pop();
                }
                s.push(2);
            }
            else
            {
                if(s.empty())
                {
                    ans++;
                    s.push(1);
                    continue;
                }
                if(s.top() == 1)
                {
                    s.pop();
                }
                else
                {
                    s.pop();
                    s.push(1);
                }
            }
        }
        while(s.size())
        {
            ans += s.top();
            s.pop();
        }
        return ans;
            
    }



int main(){
  
  return 0;
}