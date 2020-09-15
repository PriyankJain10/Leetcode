// time - O(n)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    vector<int> countBits(int num) {
        vector<int> v(num+1, 0);
        for(int i=1;i<=num;i++)
        {
            v[i] = v[i>>1] + (i&1);
        }
        return v;
    }




int main(){
  
  return 0;
}