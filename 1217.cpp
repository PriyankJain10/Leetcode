// time - O(n^2)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    int minCostToMoveChips(vector<int>& position) {
        int n = position.size(), ans = INT_MAX;
        sort(position.begin(), position.end());
        unordered_map<int, bool> m;
        for(int i=0;i<n;i++)
        {
            if(m[position[i]])
                continue;
            m[position[i]] = 1;
            int curr = 0;
            for(int j=0;j<n;j++)
            {
                if(position[j] == position[i])
                    continue;
                int x = abs(position[i] - position[j]);
                if(x%2)
                    curr++;
            }
            ans = min(ans, curr);
        }
        return ans;
    }




int main(){
  
  return 0;
}