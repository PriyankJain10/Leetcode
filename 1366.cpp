// time - O(m*nlogn)    m = size of strings
// space - O(n*m)

#include<bits/stdc++.h>
using namespace std;

    
    string rankTeams(vector<string>& votes) {
        int n = votes.size(), m = votes[0].size();
        if(n == 1)
            return votes[0];
        
        vector<vector<int>> v(26);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                v[(votes[i][j] - 'A')].push_back(j+1);
        
        vector<pair<vector<int> , char> > rank;
        for(int i=0;i<26;i++)
        {
            if(v[i].size() > 0)
            {
                sort(v[i].begin(), v[i].end());
                rank.push_back({v[i], (char)(i + 'A')});
            }
        }
        sort(rank.begin(), rank.end());
        string ans = "";
        for(int i=0;i<rank.size();i++)
        {
            ans += rank[i].second;
        }
        
        return ans;
    }




int main(){
  
  return 0;
}