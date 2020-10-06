// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    string sortString(string s) {
        int n = s.size();
        vector<int> f(26);
        for(int i=0;i<n;i++)
            f[s[i] - 'a']++;
        bool flag = 1;
        int i = 0;
        while(i<n)
        {
            if(flag)
            {
                for(int j=0;j<26;j++)
                {
                    if(f[j])
                    {
                        s[i++] = (char)('a' + j);
                        f[j]--;
                    }
                }
            }
            else
            {
                for(int j=25;j>=0;j--)
                {
                    if(f[j])
                    {
                        s[i++] = (char)('a' + j);
                        f[j]--;
                    }
                }
            }
            flag = !flag;
        }
        return s;
    }






int main(){
  
  return 0;
}