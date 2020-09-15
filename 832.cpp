// time - O(n*m)
// space - O(1)

#include<bits/stdc++.h>
using namespace std;

    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<A[0].size();j++)
            {
                if(A[i][j])
                    A[i][j] = 0;
                else
                    A[i][j] = 1;
            }
            reverse(A[i].begin(), A[i].end());
        }
        return A;
    }




int main(){
  
  return 0;
}