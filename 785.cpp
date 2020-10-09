// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        queue<int> q;
        vector<int> mark(n);
        
        // 1 = set a
        // -1 = set b
        
        for(int i=0;i<n;i++)
        {
            q.push(i);
            if(mark[i] != 0)
                continue;    
            mark[i] = 1;
            while(q.size())
            {
                int f = q.front();
                for(int x : graph[f])
                {
                    if(mark[x] == 0)
                    {
                        q.push(x);
                        mark[x] = -mark[f];
                    }
                    else if(mark[f] == mark[x])
                        return 0;
                }
                q.pop();
            }
        }
        return 1;
    }





int main(){
  
  return 0;
}