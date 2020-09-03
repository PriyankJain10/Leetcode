// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    string simplifyPath(string path) {
        stack<string> s;
        int n = path.size(), i = 0;
        while(i<n)
        {
            while(i < n && path[i] == '/')
                i++;
            string t = "";
            while(i < n && path[i]!='/')
                t+=path[i++];
            if(t == ".")
                continue;
            else if(t == "..")
            {
                if(s.size())
                    s.pop();
            }
            else
                s.push(t);
        }
        string ans = "";
        while(s.size())
        {
            if(s.top() != "")
                ans = "/" + s.top() + ans;
            s.pop();
        }
        if(ans == "")
            return "/";
        return ans;
    }



int main(){
  
  return 0;
}