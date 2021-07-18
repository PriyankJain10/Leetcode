// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;


    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        if(n != m)
            return 0;
        vector<int> freq(26);
        for(int i=0;i<n;i++)
        {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for(int i=0;i<26;i++)
            if(freq[i] != 0)
                return 0;
        return 1;
    }



int main(){
  
  return 0;
}