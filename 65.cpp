// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    bool isNumber(string s) {
        int n = s.size();
        if(n == 0 || s[0] == 'e' || s[n-1] == 'e' || s[n-1] == '-' || s[n-1] == '+')
            return 0;
        bool e = 0;
        int dot = 0, i = 0, num = 0;
        while(s[i] == ' ')
            i++;
        while(i < n)
        {
            if(s[i] == 'e')
            {
                if(e || !num)
                    return 0;
                e = 1;
            }
            else if(s[i] == '-')
            {
                if(i != 0 && s[i-1]!='e' && s[i-1]!=' ')
                    return 0;
            }
                
            else if(s[i] == '+')
            {
                 if(i != 0 && s[i-1]!='e' && s[i-1]!=' ')
                     return 0;   
            }
            
            else if(s[i] == '.')
            {
                if(dot || e)
                    return 0;
                else
                    dot = 1;
            }
            else if(s[i] >= '0' && s[i] <= '9')
            {
                if(e)
                    num = 2;
                else
                    num = 1;
            }
            
            else if(s[i] == ' ')
            {
                while(i < n && s[i] == ' ')
                    i++;
                if(i == n)
                    break;
                return 0;
            }
            else
                return 0;
            i++;
        }
        if(e)
            return num == 2;
        return num == 1;
    }






int main(){
  
  return 0;
}