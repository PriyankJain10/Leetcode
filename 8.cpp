// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int myAtoi(string s) {
        long long int ans = 0;
        int n = s.size(), i = 0;
        while(i < n && s[i] == ' ')
            i++;
        if(i == n)
            return 0;
        bool neg = 0, digit = 0;
        if(s[i] == '-')
        {
            neg = 1;
            i++;
        }
        else if(s[i] == '+')
            i++;
        while(i < n)
        {
            if(!isdigit(s[i]))
                break;
            if(ans > INT_MAX)
                break;
            ans = ans*10 + (s[i]-'0');
            i++;
        }
        if(neg)
        {
            ans = -ans;
            if(ans < INT_MIN)
                return INT_MIN;
            return ans;
        }
        if(ans > INT_MAX)
            return INT_MAX;
        return ans;
    }




int main(){
  
  return 0;
}