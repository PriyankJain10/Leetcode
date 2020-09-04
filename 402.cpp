// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    string removeKdigits(string num, int k) {
        stack<char> s;
        int cnt = 0;
        for(char c : num)
        {
            if(s.empty() || cnt == k)
            {
                s.push(c);
            }
            else
            {
                while(s.size() && s.top() > c && cnt < k)
                {
                    s.pop();
                    cnt++;
                }
                s.push(c);
            }
        }
        while(s.size() && cnt < k)
        {
            s.pop();
            cnt++;
        }
        string ans = "", t = "";
        while(s.size())
        {
            ans = s.top() + ans;
            s.pop();
        }
        if(ans == "")
            return "0";
        int i = 0;
        while(i<ans.size() && ans[i] == '0')
            i++;
        while(i<ans.size())
        {
            t += ans[i++];
        }
        if(t == "")
            return "0";
        return t;
    }



int main(){
  
  return 0;
}