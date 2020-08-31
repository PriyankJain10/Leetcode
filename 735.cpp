// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for(int x : asteroids)
        {
            if(s.empty())
            {
                s.push(x);
                continue;
            }
            bool flag = 1;
            while(s.size() && (s.top() > 0 && x < 0))
            {
                if(s.top() + x < 0)
                    s.pop();
                else if(s.top() + x == 0)
                {
                    s.pop();
                    flag = 0;
                    break;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
                s.push(x);
        }
        vector<int> v(s.size());
        for(int i=s.size()-1;i>=0;i--)
        {
            v[i] = s.top();
            s.pop();
        }
        return v;
    }

int main(){
  
  return 0;
}