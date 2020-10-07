// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int shortestSubarray(vector<int>& A, int K) {
        int n = A.size(), ans = 50001;
        deque<int> q;
        for(int i=0;i<n;i++)
        {
            if(i>0)
                A[i] += A[i-1];
            if(A[i] >= K)
                ans = min(ans, i+1);
            while(q.size() && A[i] - A[q.front()] >= K)
            {   
                ans = min(ans , i - q.front());
                q.pop_front();
            }
            while(q.size() && A[i] <= A[q.back()])
                q.pop_back();
            q.push_back(i);
        }
        return ans <= n ? ans : -1;
    }






int main(){
  
  return 0;
}