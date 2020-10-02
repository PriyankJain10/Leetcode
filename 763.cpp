// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> partitionLabels(string S) {
        vector<int> freq(26, 0);
        vector<bool> v(26, 0);
        for(char c : S)
            freq[c - 'a']++;
        int count = 0;
        vector<int> ans;
        for(int i=0;i<S.size();i++)
        {
            v[S[i]-'a'] = 1;
            freq[S[i] - 'a']--;
            bool flag = 1;
            for(int i=0;i<26;i++)
            {
                if(v[i] && freq[i]!=0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
            {
                ans.push_back(i+1 - count);
                count = i+1;
            }
        }
        
        return ans;
    }






int main(){
  
  return 0;
}