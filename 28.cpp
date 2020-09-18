// time - O(n^2)
// space - O(1)

#include<bits/stdc++.h>
using namespace std;

    
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        
        if(m == 0)
            return 0;
        
        for(int i=0;i<=n-m;i++)
        {
            int j = 0, k = 0;
            while(j<m && haystack[i + k] == needle[j])
            {
                j++;k++;
            }
            if(j == m)
                return i;
        }
        return -1;
    }




int main(){
  
  return 0;
}