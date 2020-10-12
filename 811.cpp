// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> m;
        for(string s : cpdomains)
        {
            int i = 0, n = s.size();
            while(i < n && s[i]!=' ')
                i++;
            int cnt = stoi(s.substr(0, i));
            i++;
            m[s.substr(i)] += cnt;
            while(i<n)
            {
                if(s[i] == '.')
                    m[s.substr(i+1)] += cnt;
                i++;
            }
        }
        vector<string> v;
        for(auto it : m)
        {
            v.push_back(to_string(it.second) + " " + it.first);
        }
        return v;
    }





int main(){
  
  return 0;
}