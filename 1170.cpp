// time - O(nmlogm)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        map<int, int> m;
        
        for(string s : words)
        {
            sort(s.begin(), s.end());
            int cnt = 1;
            while(cnt < s.size() && s[cnt-1] == s[cnt])
                cnt++;
            m[cnt]++;
        }
        
        vector<int> v(queries.size());
        int i = 0;
        for(string s : queries)
        {
            sort(s.begin(), s.end());
            int cnt = 1;
            while(cnt < s.size() && s[cnt-1] == s[cnt])
                cnt++;
            int ans = 0;
            for(auto it : m)
            {
                if(it.first > cnt)
                    ans += it.second;
            }
            v[i++] = ans;
        }
        return v;
    }






int main(){
  
  return 0;
}