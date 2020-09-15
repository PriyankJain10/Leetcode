// time - O(nlogn)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {
        map<int, double, greater<int> > m;
        for(int i=0;i<speed.size();i++)
            m[pos[i]] = (double)(target - pos[i])/speed[i];
        double curr = 0;
        int ans = 0;
        for(auto it : m)
        {
            if(it.second > curr)
            {
                curr = it.second;
                ans++;
            }
        }
        return ans;
    }




int main(){
  
  return 0;
}