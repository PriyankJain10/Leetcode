// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> sortedSquares(vector<int>& A) {
        vector<int> v(A.size());
        int i = 0;
        while(i < A.size() && A[i] < 0)
            i++;
        int j = i-1, k = 0;
        while(j>=0 && i<A.size())
        {
            if((A[j] * A[j]) < (A[i]*A[i]))
            {
                v[k++] = (A[j]*A[j]);
                j--;
            }
            else
            {
                v[k++] = (A[i]*A[i]);
                i++;
            }
        }
        while(j>=0)
        {
            v[k++] = (A[j]*A[j]);
            j--;
        }
        while(i<A.size())
        {
            v[k++] = A[i]*A[i];
            i++;
        }
        return v;
    }






int main(){
  
  return 0;
}