// time - O(n^2)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    

    string countAndSay(int n) {
        if(n == 1)
            return "1";
        string s = countAndSay(n-1);
        string ans = "";
        int i = 0;
        while(i < s.size())
        {
            int j = 1;
            while(i+j < s.size() && s[i] == s[i+j])
                j++;
            ans += to_string(j) + s[i];
            i+=j;
        }
        return ans;
    }




int main(){
  
  return 0;
}