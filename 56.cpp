// time - O(nlogn)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

static bool comp(vector<int> a, vector<int> b)
    {
        return a[0] < b[0];
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
        int cnt = 0;
        vector<vector<int>> v;
        for(int i=0;i<intervals.size();i++)
        {
            if(cnt == 0)
            {
                cnt++;
                v.push_back(intervals[i]);
                continue;
            }
            if(v[cnt-1][1] < intervals[i][0])
            {
                v.push_back(intervals[i]);
                cnt++;
            }
            else
            {
                v[cnt-1][1] = max(v[cnt-1][1], intervals[i][1]);
            }
        }
        return v;
    }




int main(){
  
  return 0;
}