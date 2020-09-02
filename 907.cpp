// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    int sumSubarrayMins(vector<int>& A) {
        int m = 1000000007;
        int n = A.size();
        stack<int> s1, s2;
        vector<int> v1(n), v2(n);
        for(int i=0;i<n;i++)
        {
            v1[i] = i;
            v2[i] = n - i - 1;
        }
        for(int i=0;i<n;i++)
        {
            while(s1.size() && A[s1.top()] > A[i])
            {
                v2[s1.top()] = i - s1.top() - 1;
                s1.pop();
            }
            s1.push(i);
        }
        
        for(int i=n-1;i>=0;i--)
        {
            while(s2.size() && A[s2.top()] >= A[i])
            {
                v1[s2.top()] = s2.top() - i - 1;
                s2.pop();
            }
            s2.push(i);
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ans = (ans + (A[i] * ((v1[i] + 1) * (v2[i] + 1))%m)%m)%m;
        }
        return (ans%m);
    }



int main(){
  
  return 0;
}