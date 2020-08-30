// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    int calPoints(vector<string>& ops) {
        stack<int> v;
        int sum = 0;
        for(string s : ops)
        {
            if(s == "D")
                v.push(2*v.top());
            
            else if(s == "C")
                v.pop();
            
            else if(s == "+")
            {
                int a = v.top();
                v.pop();
                int b = v.top();
                v.push(a);
                v.push(a+b);
            }
            else 
                v.push(stoi(s));
        }
        while(v.size())
        {
            sum+=v.top();
            v.pop();
        }
        return sum;
    }


int main(){
  
  return 0;
}