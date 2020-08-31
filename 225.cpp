// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q[2];
    bool flag = 0;
    MyStack() {
        while(q[0].size())
            q[0].pop();
        while(q[1].size())
            q[1].pop();
        flag = 0;
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q[flag].push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(q[flag].size() != 1)
        {
            q[!flag].push(q[flag].front());
            q[flag].pop();
        }
        int a = q[flag].front();
        q[flag].pop();
        flag = !flag;
        return a;
    }
    
    /** Get the top element. */
    int top() {
        while(q[flag].size() != 1)
        {
            q[!flag].push(q[flag].front());
            q[flag].pop();
        }
        int a = q[flag].front();
        q[!flag].push(q[flag].front());
        q[flag].pop();
        flag = !flag;
        return a;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return (q[flag].empty() & q[!flag].empty());
    }
};


int main(){
  
  return 0;
}