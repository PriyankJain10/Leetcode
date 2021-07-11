// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    
    bool check(string &s, int i, int j)
    {
        while(i < j)
        {
            if(s[i] != s[j])
                return 0;
            i++,j--;
        }
        return 1;
    }
    
    bool validPalindrome(string s) {
        int n = s.size();
        int i = 0, j = n-1;
        while(i < j)
        {
            if(s[i] != s[j])
            {
                if(check(s, i+1, j) || check(s, i, j-1))
                    return 1;
                return 0;
            }
            i++,j--;
        }
        return 1;
    }



int main(){
  
  return 0;
}