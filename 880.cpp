// time - O(n)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
    string decodeAtIndex(string S, int K) {
        if(K == 0)
            return S.substr(0,1);
        long long int n = 0;
        for(int i=0;i<S.size();i++)
            isdigit(S[i]) ? n*=(S[i] - '0') : n++;
        
        for(int i=S.size()-1; i>=0;i--)
        {
            if(isdigit(S[i]))
            {
                n /= (S[i] - '0'), K%=n;
            }
            else
            {
                if(K%n == 0)
                    return S.substr(i, 1);
                n--;
            }
        }
        return "";
    }



int main(){
  
  return 0;
}