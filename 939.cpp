// time - O(n^2)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int minAreaRect(vector<vector<int>>& points) {
        int ans = INT_MAX;
        
        unordered_map<int, set<int>> x;
        vector<int> y;
        for(vector<int> v : points)
            x[v[0]].insert(v[1]);
        
        for(auto i = x.begin(); i != x.end(); i++)
        {
            if(i->second.size() < 2)
                continue;
            for(auto j = next(i); j != x.end(); j++)
            {
                if(j->second.size() < 2)
                    continue;
                y.clear();
                set_intersection(i->second.begin(), i->second.end(), j->second.begin(), j->second.end(), back_inserter(y));
                
                for(int k = 1; k < y.size(); k++)
                    ans = min(ans, abs(i->first - j->first) * (y[k] - y[k-1]));
            }
        }
        
        return ans == INT_MAX ? 0 : ans;
    }




int main(){
  
  return 0;
}