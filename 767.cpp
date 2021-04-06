// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    string reorganizeString(string S) {
        int n = S.size();
        vector<int> freq(26);
        for(char c : S)
            freq[c - 'a']++;
        vector<pair<int, char>> v;
        for(int i=0;i<26;i++)
        {
            if(freq[i] > (n+1)/2)
                return "";
            v.push_back({freq[i], 'a' + i});
        }
        
        sort(v.begin(), v.end());
        string s = "";
        for(int i=25;i>=0;i--)
            s += string(v[i].first, v[i].second);
        
        string ans = "";
        for(int i=0, j=(n+1)/2; i<(n+1)/2; i++, j++)
        {
            ans += s[i];
            if(j < n)
                ans += s[j];
        }
        
        return ans;
    }




int main(){
  
  return 0;
}