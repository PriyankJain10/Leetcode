// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    string decodeString(string s) {
        string curr = "", ans = "";
        stack<pair<string, int> > k;
        int i = 0;
        while(i<s.size())
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                int num = 0;
                while(s[i] >= '0' && s[i] <= '9')
                {
                    num = num*10 + (s[i] - '0');
                    i++;
                }
                k.push({curr, num});
                curr = "";
            }
            else if(s[i] == '[')
            {
                i++;   
            }
            else if(s[i] == ']')
            {
                string t = k.top().first;
                for(int j=0;j<k.top().second;j++)
                {
                    t.append(curr);
                }
                k.pop();
                if(k.empty())
                {
                    ans += t;
                    curr = "";
                }
                else
                {
                    curr = t;
                }
                i++;
            }
            else
            {
                curr += s[i++];
            }
        }
        ans.append(curr);
        return ans;


int main(){
  
  return 0;
}