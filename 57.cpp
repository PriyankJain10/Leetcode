// time - O(nlogn)   
// space - O(1)        

#include<bits/stdc++.h>
using namespace std;

    
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int> > ans;
        sort(intervals.begin(), intervals.end());
        int x = newInterval[0], y = newInterval[1], k = -1;
        bool flag = 0;
        for(int i=0;i<intervals.size();i++)
        {
            if(flag)
            {
                if(ans[k][1] >= intervals[i][0])
                    ans[k][1] = max(intervals[i][1], ans[k][1]);
                else
                {
                    ans.push_back(intervals[i]);
                    k++;
                }
            }
            else
            {
                if(y < intervals[i][0])
                {
                    ans.push_back({x, y});
                    k++;
                    i--;
                    flag = 1;
                    continue;
                }
                if(x < intervals[i][0] && y > intervals[i][1])
                {
                    ans.push_back({x, y});
                    k++;
                    flag = 1;
                    continue;
                }
                if((y >= intervals[i][0] && y <= intervals[i][1]) || (x >= intervals[i][0] && x <= intervals[i][1]))
                {
                    ans.push_back({min(x, intervals[i][0]), max(intervals[i][1], y)});
                    k++;
                    flag = 1;
                    continue;
                }
                ans.push_back(intervals[i]);
                k++;
            }
        }
        if(flag == 0)
        {
            ans.push_back(newInterval);
        }
        return ans;
    }




int main(){
  
  return 0;
}