// time - O(n^2)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    int lengthOfLastWord(string s) {
        int n = s.size(), ans = 0;
        int i = n-1;
        while(i >= 0 && s[i] == ' ')
            i--;
        while(i >= 0 && s[i] != ' ')
        {
            i--;
            ans++;
        }
        return ans;
    }




int main(){
  
  return 0;
}