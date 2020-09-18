// time - O(n^20)   but practically always less than n^2
// space - O(1)        

#include<bits/stdc++.h>
using namespace std;

    
    string longestPalindrome(string s) {
        int n = s.size();
        if(n < 2)
            return s;
        string ans = "";
        ans += s[0];
        for(int i=0;i<n;i++)
        {
            // odd
            int j = i-1, k = i+1;
            while(j>=0 && k<n && s[j] == s[k])
            {
                j--;
                k++;
            }
            if(k-j-1 > ans.size())
            {
                ans = s.substr(j+1, k-j-1);
            }
            
            // even
            j = i, k = i+1;
            while(j>=0 && k<n && s[j] == s[k])
            {
                j--;
                k++;
            }
            if(k-j-1 > ans.size())
            {
                ans = s.substr(j+1, k-j-1);
            }
        }
        return ans;
    }




int main(){
  
  return 0;
}