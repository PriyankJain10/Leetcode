// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> beautifulArray(int N) {
        vector<int> v = {1};
        while(v.size() < N)
        {
            vector<int> t;
            for(int x : v)
                if(2*x-1 <= N)
                    t.push_back(2*x-1);
            for(int x : v)
                if(2*x <= N)
                    t.push_back(2*x);
            v = t;
        }
        return v;
    }





int main(){
  
  return 0;
}