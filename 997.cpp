// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int findJudge(int N, vector<vector<int>>& trust) {
        vector<pair<int, int>> v(N, {0, 0});
        
        // first = how many does i trust
        // second = how may trust i
        
        for(int i=0;i<trust.size();i++)
        {
            v[trust[i][0]-1].first++;
            v[trust[i][1]-1].second++;
        }
        for(int i=0;i<N;i++)
        {
            if(v[i].first == 0 && v[i].second == N-1)
                return i+1;
        }
        return -1;
    }






int main(){
  
  return 0;
}