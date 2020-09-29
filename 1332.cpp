// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    bool isPalindrome(string s,int n)
    {
        int i = 0, j = n-1;
        while(i<j)
        {
            if(s[i] != s[j])
            {
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    }
    
    int removePalindromeSub(string s) {
        int n = s.size();
        if(n == 0)
            return 0;
        if(n == 1 || isPalindrome(s, n))
            return 1;
        return 2;
    }
};





int main(){
  
  return 0;
}