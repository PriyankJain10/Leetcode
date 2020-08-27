// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    int findLatestStep(vector<int>& arr, int m) {
        int n = arr.size(), ans = -1;
        if(n == m)
            return n;
        vector<int> len(n+2);
        for(int i=0;i<n;i++)
        {
            int l = len[arr[i] - 1] , r = len[arr[i] + 1];
            len[arr[i]-l] = l + r + 1;
            len[arr[i]+r] = l + r + 1;
            if(l == m || r == m)
                ans = i;
        }
        return ans;
    }


int main(){
  
  return 0;
}