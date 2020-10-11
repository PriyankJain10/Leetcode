// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int numJewelsInStones(string J, string S) {
        int cnt = 0;
        unordered_map<char, bool> m;
        for(char c : J)
            m[c] = 1;
        for(char c : S)
            if(m.count(c) > 0)
                cnt++;
        return cnt;
    }





int main(){
  
  return 0;
}