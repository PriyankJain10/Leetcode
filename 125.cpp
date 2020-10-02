// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    bool isPalindrome(string s) {
        int n = s.size(), i = 0, j = n - 1;
        while(i<j)
        {
            if((s[i] > 'z' || s[i] < 'a') && (s[i] < 'A' || s[i] > 'Z') && (s[i] < '0' || s[i] > '9'))
            {
                i++;
                continue;
            }
            if((s[j] > 'z' || s[j] < 'a') && (s[j] < 'A' || s[j] > 'Z') && (s[j] < '0' || s[j] > '9'))
            {
                j--;
                continue;
            }
            
            int a, b;
            if(s[i] >= 'a')
                a = s[i] - 'a';
            else
                a = s[i] - 'A';
            if(s[j] >= 'a')
                b = s[j] - 'a';
            else
                b = s[j] - 'A';
            if(a != b)
                return 0;
            i++;
            j--;
        }
        return 1;
    }






int main(){
  
  return 0;
}