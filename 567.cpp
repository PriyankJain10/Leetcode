// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;


    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if(n > m)
            return 0;
        vector<int> v(26);
        for(int i=0;i<n;i++)
        {
            v[s1[i] - 'a']++;
            v[s2[i] - 'a']--;
        }
        
        bool flag = 1;
        for(int i=0;i<26;i++)
        {
            if(v[i] != 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            return 1;
        
        for(int i=n;i<m;i++)
        {
            v[s2[i-n] - 'a']++;
            v[s2[i] - 'a']--;
            if(v[s2[i-n] - 'a'] == 0 && v[s2[i] - 'a'] == 0)
            {
                flag = 1;
                for(int j=0;j<26;j++)
                {
                    if(v[j] != 0)
                    {
                        flag = 0;
                        break;
                    }
                }
                if(flag)
                    return 1;
            }
        }
        return 0;
    }



int main(){
  
  return 0;
}