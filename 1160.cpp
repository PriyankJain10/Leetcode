// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int countCharacters(vector<string>& words, string chars) {
        vector<int> m(26), f;
        for(char c : chars)
            m[c-'a']++;
        int ans = 0;
        bool flag;
        for(string s : words)
        {
            flag = 1;
            f.clear();
            f.resize(26);
            for(char c : s)
            {
                f[c - 'a']++; 
                if(f[c - 'a'] > m[c - 'a'])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
                ans += s.size();
        }
        return ans;
    }





int main(){
  
  return 0;
}