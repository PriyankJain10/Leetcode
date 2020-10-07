// time - O(exp(n))   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    void rec(unordered_map<string, bool> &m, string s, int n)
    {
        if(m.count(s) > 0)
            return ;
        
        m[s] = 1;

        if(n == 1)        
            return ;

        for(int i=0;i<n;i++)
        {
            rec(m, s.substr(0, i) + s.substr(i+1), n-1);
        }
        return ;
    }
    
    int numTilePossibilities(string s) {
        int n = s.size();
        if(n == 1)
            return 1;
        sort(s.begin(), s.end());
        unordered_map<string, bool> m;
        rec(m, s, n);
        while(next_permutation(s.begin(), s.end()))
            rec(m, s, n);
        return m.size();
    }






int main(){
  
  return 0;
}