// time - O(n*m*log(n*m))
// space - O(n*m)

#include<bits/stdc++.h>
using namespace std;

    
    int trapRainWater(vector<vector<int>>& heightMap) {
        int n = heightMap.size() , m = heightMap[0].size();
        if(n < 3 || m < 3)
            return 0;
        vector<vector<bool>> visited(n, vector<bool> (m, 0));
        priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>> > q;
        for(int i=0;i<n;i++)
        {
            visited[i][0] = 1;
            visited[i][m-1] = 1;
            q.push({heightMap[i][0], {i, 0}});
            q.push({heightMap[i][m-1], {i, m-1}});
        }
        for(int i=0;i<m;i++)
        {
            visited[0][i] = 1;
            visited[n-1][i] = 1;
            q.push({heightMap[0][i], {0, i}});
            q.push({heightMap[n-1][i], {n-1, i}});
        }
        int hi = 0, ans = 0, x[4] = {0, 0, -1, 1}, y[4] = {1, -1, 0, 0};
        while(q.size())
        {
            int i = q.top().second.first, j = q.top().second.second;
            hi = max(hi, q.top().first);
            q.pop();
            for(int k=0;k<4;k++)
            {
                int xi = i + x[k], yi = j + y[k];
                if(xi>=0 && xi<n && yi>=0 && yi<m && !visited[xi][yi])
                {
                    ans += max(0, hi - heightMap[xi][yi]);
                    q.push({heightMap[xi][yi], {xi, yi}});
                    visited[xi][yi] = 1;
                }
            }
        }
        return ans;
    }




int main(){
  
  return 0;
}