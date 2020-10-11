// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int repeatedNTimes(vector<int>& A) {
        unordered_map<int, bool> m;
        for(int x : A)
        {
            if(m[x])
                return x;
            m[x] = 1;
        }
        return 0;
    }





int main(){
  
  return 0;
}