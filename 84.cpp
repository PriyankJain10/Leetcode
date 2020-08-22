// time - O(n)
// space - O(n)   

#include<bits/stdc++.h>
using namespace std;


    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        if(n == 0)
            return 0;
        if(n == 1)
            return heights[0];
        if(n == 2)
            return max(max(heights[0], heights[1]), min(heights[0], heights[1])*2);
        
        stack<int> s;
        s.push(0);
        int ans = 0;
        for(int i=1;i<n;i++)
        {
            while(!s.empty() && heights[s.top()] > heights[i])
            {
                int last = s.top();
                s.pop();
                if(!s.empty())
                    ans = max(ans, (i - s.top() - 1)*heights[last]);
                else
                    ans = max(ans, (i)*heights[last]);
            }
            s.push(i);
        }
        while(!s.empty())
        {
            int last = s.top();
            s.pop();
            if(!s.empty())
                ans = max(ans, (n - s.top() - 1)*heights[last]);
            else 
                ans = max(ans, n*heights[last]);
        }
        return ans;
    }


int main(){
  
  return 0;
}