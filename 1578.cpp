// time - O(n)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    int minCost(string s, vector<int>& cost) {
        int n = s.size();
        if(n==1)
            return 0;
        int ans = 0;
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            if(st.empty() || s[st.top()] != s[i])
            {
                st.push(i);
                continue;
            }
            ans += min(cost[st.top()], cost[i]);
            if(cost[st.top()] < cost[i])
            {
            
                st.pop();
                st.push(i);
            }
        }
        return ans;
    }




int main(){
  
  return 0;
}