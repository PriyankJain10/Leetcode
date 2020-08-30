// time - O(logn)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s;
    set<int> mins;
    unordered_map<int, int> m;
    MinStack() {
        while(s.size())
            s.pop();
        m.clear();
        mins.clear();
    }
    
    void push(int x) {
        s.push(x);
        m[x]++;
        if(m[x] == 1)
            mins.insert(x);
    }
    
    void pop() {
        int x = s.top();
        s.pop();
        m[x]--;
        if(m[x] == 0)
            mins.erase(x);
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return (*(mins.begin()));
    }
};


int main(){
  
  return 0;
}