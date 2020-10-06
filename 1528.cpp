// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        string v = s;
        for(int i=0;i<n;i++)
            v[indices[i]] = s[i];
        
        return v;
    }






int main(){
  
  return 0;
}