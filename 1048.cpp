// time - O(nlogn)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    static bool comp(string a, string b)
    {
        return a.length() < b.length();
    }
    
    int longestStrChain(vector<string>& words) {
        int n = words.size();
        sort(words.begin(), words.end(), comp);
        unordered_map<string, int> dp;
        int ans = 1;
        for(string s : words)
        {
            for(int i=0;i<s.size();i++)
            {
                dp[s] = max(dp[s], 1 + dp[s.substr(0,i) + s.substr(i+1)]);
            }
            ans = max(ans, dp[s]);
        }
        return ans;
    }




int main(){
  
  return 0;
}