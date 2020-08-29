// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        vector<int> v(n, 0);
        stack<int> s;
        for(int i=n-1;i>0;i--)
        {
            s.push(i);
        }
        int i = 0;
        while(!s.empty() && i< n-1)
        {
            int x = s.top();
            s.pop();
            int j = x-1;
            if(T[x] <= T[j])
                continue;
            while(j>=i && T[x] > T[j])
            {
                if(v[j] == 0)
                    v[j] = x - j;
                j--;
            }
            if(j < i)
                i = x;
        }
        return v;
    }


int main(){
  
  return 0;
}