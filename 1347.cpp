// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;


    int minSteps(string s, string t) {
        int n = s.size();
        unordered_map<char, int> m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
            m[t[i]]--;
        }
        int ans = 0;
        for(auto it=m.begin(); it!=m.end();it++)
        {
            if(it->second > 0)
                ans += it->second;
        }
        return ans;
    }


int main(){
  
  return 0;
}