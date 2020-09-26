// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> addToArrayForm(vector<int>& A, int K) {
        stack<int> s;
        int i = A.size()-1;
        while(K || i>=0)
        {
            int x = K;
            if(i>=0)
                x += A[i];
            K = x/10;
            s.push(x%10);
            i--;
        }
        vector<int> v;
        while(s.size())
        {
            v.push_back(s.top());
            s.pop();
        }
        return v;
    }





int main(){
  
  return 0;
}