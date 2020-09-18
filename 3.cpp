// time - O(n)   
// space - O(n)        

#include<bits/stdc++.h>
using namespace std;

    
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n < 2)
            return n;
        int ans = 1, i = 0, j = 0;
        unordered_map<char, bool> m;
        while(j<n && i<n)
        {
            if(m[s[j]])
            {
                while(s[i] != s[j])
                {
                    m[s[i]] = 0;
                    i++;
                }
                i++;
            }
            else
                m[s[j]] = 1;
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }




int main(){
  
  return 0;
}