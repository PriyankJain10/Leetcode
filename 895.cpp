// time - O(1)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
class FreqStack {
public:
    unordered_map<int, int> freq;
    unordered_map<int, stack<int> > m;
    int maxf;
    
    FreqStack() {
        maxf = 0;
        freq.clear();
        m.clear();
    }
    
    void push(int x) {
        maxf = max(maxf, ++freq[x]);
        m[freq[x]].push(x);
    }
    
    int pop() {
        int a = m[maxf].top();
        m[maxf].pop();
        freq[a]--;
        while(maxf > 0 && m[maxf].size() == 0)
            maxf--;
        return a;
    }
};


int main(){
  
  return 0;
}