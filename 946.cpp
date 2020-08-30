// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();
        if(n == 0)
            return 1;
        int i = 1, j = 0;
        stack<int> s;
        s.push(pushed[0]);
        while(j<n)
        {
            if(s.size() && s.top() == popped[j])
            {
                s.pop();
                j++;
                continue;
            }
            else
            {
                if(i<n)
                    s.push(pushed[i++]);
                else
                    return false;
            }
        }
        return true;
    }


int main(){
  
  return 0;
}