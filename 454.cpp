// time - O(n^2)   
// space - O(n^2)               

#include<bits/stdc++.h>
using namespace std;

    

    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int, int> m1, m2;
        int n = A.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                m1[A[i] + B[j]]++;
                m2[C[i] + D[j]]++;
            }
        }
        
        int count = 0;
        
        for(auto it : m1)
        {
            if(m2.count((-it.first)) > 0)
                count += it.second * m2[-it.first];
        }
        return count;
    }






int main(){
  
  return 0;
}