// time - O(n^2)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int minDeletionSize(vector<string>& A) {
        int cnt = 0;
        for(int j=0;j<A[0].size();j++)
        {
            for(int i=1;i<A.size();i++)
            {
                if(A[i][j] < A[i-1][j])
                {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }






int main(){
  
  return 0;
}