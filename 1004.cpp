// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int longestOnes(vector<int>& A, int K) {
        int i = 0, j = 0;
        for(;j<A.size();j++)
        {
            if(A[j] == 0)
                K--;
            if(K<0 && A[i++] == 0)
                K++;
        }
        return j - i;
    }






int main(){
  
  return 0;
}