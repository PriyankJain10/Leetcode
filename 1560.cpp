// time - O(n^2)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;


    vector<int> mostVisited(int n, vector<int>& rounds) {
        unordered_map<int, int> m;
        for(int i=0;i<rounds.size()-1;i++)
        {
            int j = rounds[i];
            while(j != rounds[i+1])
            {
                m[j]++;
                j++;
                if(j > n)
                    j = 1;
            }
        }
        m[rounds[rounds.size()-1]]++;
        int x = 1;
        for(auto it = m.begin();it!=m.end();it++)
        {
            if(x < it->second)
                x = it->second;
        }
        vector<int> v;
        for(auto it = m.begin();it!=m.end();it++)
        {
            if(it->second == x)
            {
                v.push_back(it->first);
            }
        }
        sort(v.begin(), v.end());
        return v;
    }


int main(){
  
  return 0;
}