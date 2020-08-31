// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
class StockSpanner {
public:
    stack<int> s, a;
    int n;
    StockSpanner() {
        n = 0;
        while(s.size())
            s.pop();
        while(a.size())
            a.pop();
    }
    
    int next(int price) {
        int ans = 1;
        while(s.size() && s.top() <= price)
        {
            s.pop();
            ans += a.top();
            a.pop();
        }
        a.push(ans);
        s.push(price);
        return ans;
    }
};



int main(){
  
  return 0;
}