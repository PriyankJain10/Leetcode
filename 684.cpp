// time - O(nlogn)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int get(unordered_map<int, int> &parent, int x)
    {
        if(parent.find(x) == parent.end())
            return x;
        
        return get(parent, parent[x]);
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        vector<int> v(2);
        unordered_map<int, int> parent;
        for(int i=0;i<edges.size();i++)
        {
            int p1 = get(parent, edges[i][0]), p2 = get(parent, edges[i][1]);
            
            if(p1 == p2)
            {
                v[0] = edges[i][0];
                v[1] = edges[i][1];
            }
            
            else
            {
                parent[p1] = p2;
            }
        }
        return v;
    }






int main(){
  
  return 0;
}