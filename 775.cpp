// time - O(nlogn)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    long long int Merge(vector<int> &A, int s, int e, int m)
    {
        vector<int> t(e-s+1);
        int i = s, j = m+1, k = 0;
        long long int ans = 0;
        while(i<=m && j<=e)
        {
            if(A[i] > A[j])
            {
                t[k++] = A[j++];
                ans += (m - i + 1);
            }
            else
                t[k++] = A[i++];
        }
        while(i<=m)
            t[k++] = A[i++];
        while(j<=e)
            t[k++] = A[j++];
        for(i=s;i<=e;i++)
        {
            A[i] = t[i-s];
        }
        return ans;
    }
    
    long long int  Mergesort(vector<int> &A, int s, int e)
    {
        if(s >= e)
            return 0;
        
        int m = (s+e)/2;
        
        long long int a = Mergesort(A, s, m), b = Mergesort(A, m+1, e), c;
        
        c = Merge(A, s, e, m);
        
        return a+b+c;
    }
    
    bool isIdealPermutation(vector<int>& A) {
        long long int n = A.size(), l = 0, g = 0;
        for(int i=0;i<n-1;i++)
        {
            if(A[i] > A[i+1])
                l++;
        }
        g = Mergesort(A, 0, n-1);
        return l == g;
    }




int main(){
  
  return 0;
}