// time - O(nlogn)
// space - O(1)      

#include<bits/stdc++.h>
using namespace std;


int largestSumAfterKNegations(vector<int>& A, int K) 
{
        int x = 0, n = A.size(), sum = 0, small = INT_MAX;
        sort(A.begin(), A.end());
        for(int i=0;i<n;i++)
        {
            small = min(small, abs(A[i]));
            if(A[i] < 0 && x < K)
            {
                A[i] = -A[i];
                x++;
            }
            sum += A[i];
        }
        if(x < K)
        {
            if((K - x)%2)
                sum -= 2*small;
        }
        return sum;
}


int main(){
  
  return 0;
}