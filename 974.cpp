// time - O(n + k)   
// space - O(k)               

#include<bits/stdc++.h>
using namespace std;

    

    int mod(int curr, int k)
    {
        while(curr < 0)
            curr += k;
        return curr%k;
    }
    
    int subarraysDivByK(vector<int>& A, int k) {
        vector<int> v(k);
        int sum = 0;
        for(int x : A)
        {
            sum += x;
            int i = mod(sum, k);
            v[i]++;
        }
        int cnt = v[0];
        for(int i=0;i<k;i++)
            cnt += (v[i]*(v[i]-1))/2;
        
        return cnt;
    }




int main(){
  
  return 0;
}