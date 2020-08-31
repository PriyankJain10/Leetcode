// time - O(n)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
    char findTheDifference(string s, string t) {
        vector<int> v(26, 0);
        int i;
        for(i=0;i<s.size();i++)
        {
            v[t[i] - 'a']++;
            v[s[i] - 'a']--;
        }    
        v[t[i] - 'a']++;
        for(i=0;i<26;i++)
        {
            if(v[i] > 0)
                return (char)('a' + i);
        }
        return 'a';
    }

int main(){
  
  return 0;
}