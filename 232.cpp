// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> s[2];
    bool flag;
    MyQueue() {
        flag = 0;
        while(s[0].size())
            s[0].pop();
        while(s[1].size())
            s[1].pop();
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s[flag].push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(s[!flag].empty())
        {
            while(s[flag].size())
            {
                s[!flag].push(s[flag].top());
                s[flag].pop();
            }
        }
        int a = s[!flag].top();
        s[!flag].pop();
        return a;
    }
    
    /** Get the front element. */
    int peek() {
        if(s[!flag].empty())
        {
            while(s[flag].size())
            {
                s[!flag].push(s[flag].top());
                s[flag].pop();
            }
        }
        return s[!flag].top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s[flag].empty() & s[!flag].empty();   
    }
};


int main(){
  
  return 0;
}