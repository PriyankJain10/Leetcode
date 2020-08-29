// time - O(k)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
class CustomStack {
public:
    
    vector<int> v;
    int n , curr;
    CustomStack(int maxSize) {
        v.clear();
        v.resize(maxSize);
        n = maxSize;
        curr = 0;
    }
    
    void push(int x) {
        if(curr < n)
        {
            v[curr++] = x;
        }
    }
    
    int pop() {
        if(curr == 0)
            return -1;
        return v[--curr];
    }
    
    void increment(int k, int val) {
        for(int i=0;i<min(k, curr) ;i++)
        {
            v[i] += val;
        }
    }
};


int main(){
  
  return 0;
}