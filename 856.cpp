// time - O(n)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
    int scoreOfParentheses(string S) {
        int ans = 0, cnt = 0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i] == '(')
                cnt++;
            else
            {
                ans += (1<< (cnt-1));
                while(S[i] == ')')
                {
                    cnt--;
                    i++;
                }
                i--;
            }
        }
        return ans;
    }



int main(){
  
  return 0;
}