// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_map<string, bool> m;
        string ans = "", s = "";
        int i = 0, n = sentence.size();
        for(string a : dictionary)
            m[a] = 1;
        while(i < n)
        {
            bool flag = 1;
            while(i < n && sentence[i] != ' ')
            {
                s += sentence[i];
                if(m.count(s) > 0)
                {
                    ans += s;
                    flag = 0;
                    break;
                }
                i++;
            }
            if(flag)
                ans += s;
            
            else
            {
                while(i < n && sentence[i] != ' ')
                    i++;
            }
            
            s = "";
            i++;
            if(i < n)
                ans += " ";
        }
        return ans;
    }





int main(){
  
  return 0;
}