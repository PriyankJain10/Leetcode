// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;


    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> v(n, 0);
        for(int i = 0;i<edges.size();i++)
        {
            v[edges[i][1]] = 1;
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(v[i] == 0)
            {
                ans.push_back(i);
            }
        }
        if(ans.size() == 0)
            ans.push_back(0);
        return ans;
    }


int main(){
  
  return 0;
}