// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    int findLucky(vector<int>& arr) {
        int ans = -1;
        unordered_map<int, int> m;
        for(int x : arr)
            m[x]++;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->first == it->second)
            {
                ans = max(ans, it->first);
            }
        }
        return ans;
    }



int main(){
  
  return 0;
}