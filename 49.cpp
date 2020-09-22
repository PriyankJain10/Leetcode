// time - O(n(mlogm))   
// space - O(n)           

#include<bits/stdc++.h>
using namespace std;

    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        int n = strs.size();
        if(n == 0)
            return v;
        if(n == 1)
        {
            v.push_back({strs[0]});
            return v;
        }
        vector<pair<string , int>> t(n);
        for(int i=0;i<n;i++)
        {
            t[i] = {strs[i], i};
            sort(t[i].first.begin(), t[i].first.end());
        }
        sort(t.begin(), t.end());
        vector<string> a;
        for(int i=0;i<n;i++)
        {
            if(i>0 && t[i-1].first == t[i].first)
                a.push_back(strs[t[i].second]);
            
            else
            {
                if(a.size()>0)
                {
                    v.push_back(a);
                    a.clear();
                }
                a.push_back(strs[t[i].second]);
            }
        }
        if(a.size()>0)
            v.push_back(a);
        return v;
    }




int main(){
  
  return 0;
}