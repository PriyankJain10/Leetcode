// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    
    string addStrings(string num1, string num2) {
        string ans = "";
        int carry = 0;
        int n = num1.size(), m = num2.size(), i = 0;
        for(;i < min(n, m); i++)
        {
            int x = (num1[n-i-1] - '0') + (num2[m-i-1] - '0') + carry;
            carry = x/10;
            x = x%10;
            ans = (char)(x + '0') + ans;
        }
        while(carry || i<max(n, m))
        {
            int x = carry;
            if(i < n)
                x += num1[n-i-1] - '0';
            if(i < m)
                x += num2[m-i-1] - '0';
            carry = x/10;
            x = x%10;
            ans = (char)(x + '0') + ans;
            i++;
        }
        return ans;
        
    }




int main(){
  
  return 0;
}