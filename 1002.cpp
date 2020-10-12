// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<string> commonChars(vector<string>& A) {
        vector<vector<int>> m(A.size(), vector<int> (26));
        vector<string> v;
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<A[i].size();j++)
            {
                m[i][A[i][j] - 'a']++;
            }
        }
        for(int j=0;j<26;j++)
        {
            int l = m[0][j];
            if(l != 0)
                for(int i=1;i<A.size();i++) 
                    l = min(l, m[i][j]);
            if(l == 0)
                continue;
            string s = "";
            s += (char)('a' + j);
            for(int i=0;i<l;i++)
                v.push_back(s);
        }
        return v;
    }





int main(){
  
  return 0;
}