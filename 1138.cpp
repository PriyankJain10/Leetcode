// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    string alphabetBoardPath(string target) {
        vector<string> v = {"abcde", "fghij", "klmno", "pqrst", "uvwxy", "z"};
        vector<pair<int, int>> m(26);
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                int x = v[i][j] - 'a';
                m[x] = {i, j};
            }
        }
        string ans = "";
        int r = 0, c = 0, i = 0, j = 0;
        for(char s : target)
        {
            i = m[s-'a'].first, j = m[s-'a'].second;
            
            if(v[r][c] == 'z')
            {
                for(int k=0;k<abs(i-r);k++)
                    ans += (i>r ? 'D' : 'U');
                r = i;
                for(int k=0;k<abs(j-c);k++)
                    ans += (j>c ? 'R' : 'L');
                c = j;
                ans += '!';
                continue;
            }
            
            for(int k=0;k<abs(j-c);k++)
                ans += (j>c ? 'R' : 'L');
            c = j;
            for(int k=0;k<abs(i-r);k++)
                ans += (i>r ? 'D' : 'U');
            r = i;
            ans += '!';
        }
        return ans;
    }




int main(){
  
  return 0;
}