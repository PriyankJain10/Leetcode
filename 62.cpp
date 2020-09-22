// time - O(n)   
// space - O()           

#include<bits/stdc++.h>
using namespace std;

    
    int uniquePaths(int m, int n) {
        int a = max(m, n), b = min(m, n);
        long long int ans = 1, div = 1;
        for(int i = a;i<a+b-1;i++)
            ans*=i;
        for(int i=2;i<b;i++)
            div*=i;
        return ans/div;
    }




int main(){
  
  return 0;
}