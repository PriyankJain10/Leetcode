// time - O(n)
// space - O(1)      

#include<bits/stdc++.h>
using namespace std;


vector<int> sortArrayByParity(vector<int>& A) {
        int n = A.size();
        vector<int> ans(n);
        int j = 0;
        for(int i=0;i<n;i++)
        {
            if(A[i]%2 == 0)
                ans[j++] = A[i];
        }
        for(int i=0;i<n;i++)
        {
            if(A[i]%2)
                ans[j++] = A[i];
        }
        return ans;
    }


int main(){
  
  return 0;
}