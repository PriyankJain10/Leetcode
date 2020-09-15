// time - O(n)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int n = A.size();
        
        vector<bool> v(n,0);
        if(A[0] == 0)
            v[0] = 1;
        for(int i=1;i<n;i++)
        {
            A[i] = (A[i-1]*2 + A[i])%5;
            if(A[i]%5 == 0)
                v[i] = 1;
        }
        return v;
    }




int main(){
  
  return 0;
}