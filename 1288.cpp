// time - O(nlogn)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    static bool comp(vector<int> a, vector<int> b)
    {
        if(a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }
    
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
        int last = 0, cnt = 0;
        for(int i=0;i<intervals.size();i++)
        {
            if(last < intervals[i][1])
            {
                last = intervals[i][1];
                cnt++;
            }
        }
        return cnt;
    }




int main(){
  
  return 0;
}