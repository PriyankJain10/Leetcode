// time - O(n*m)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int leastBricks(vector<vector<int>>& wall) {
        int cuts = wall.size();
        unordered_map<int, int> m;
        for(int i=0;i<wall.size();i++)
        {
            for(int j=0, width=0;j<wall[i].size()-1;j++)
            {
                width += wall[i][j];
                m[width]++;
                cuts = min(cuts, (int)(wall.size()) - m[width]);
            }
        }
        return cuts;
    }




int main(){
  
  return 0;
}