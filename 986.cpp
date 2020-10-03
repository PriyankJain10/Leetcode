// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int> > v;
        int i = 0, j = 0;
        while(i<A.size() && j<B.size())
        {
            if(A[i][0] > B[j][1])
                j++;
            else if(A[i][1] < B[j][0])
                i++;
            else 
            {
                vector<int> t = {max(A[i][0], B[j][0]), min(A[i][1], B[j][1])};
                v.push_back(t);
                if(A[i][1] < B[j][1])
                    i++;
                else
                    j++;
            }
        }
        return v;
    }






int main(){
  
  return 0;
}