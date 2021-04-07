// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    bool halvesAreAlike(string S) {
        int n = S.size();
        unordered_set<char> s;
        s.insert('a');
        s.insert('e');
        s.insert('i');
        s.insert('o');
        s.insert('u');
        s.insert('A');
        s.insert('E');
        s.insert('I');
        s.insert('O');
        s.insert('U');  
        
        int a = 0, b = 0;
        for(int i=0, j=n/2;j<n;i++, j++)
        {
            if(s.find(S[i]) != s.end())
                a++;
            if(s.find(S[j]) != s.end())
                b++;
        }
        return a == b;
    }




int main(){
  
  return 0;
}