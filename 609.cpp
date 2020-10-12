// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string, vector<string>> m;
        for(int i=0;i<paths.size();i++)
        {
            string s = "";
            int j = 0;
            while(paths[i][j] != ' ')
                s += paths[i][j++];
            string file = "";
            while(j < paths[i].size())
            {
                if(paths[i][j] == ' ')
                {
                    j++;
                    continue;
                }
                if(paths[i][j] == '(')
                {
                    string content = "";
                    j++;
                    while(paths[i][j] != ')')
                        content += paths[i][j++];
                    m[content].push_back(s + "/" + file);
                    file = "";
                    j++;
                    continue;
                }
                file += paths[i][j++];
            }
        }
        vector<vector<string>> v;
        for(auto it : m)
        {
            if(it.second.size() > 1)
                v.push_back(it.second);
        }
        return v;
    }





int main(){
  
  return 0;
}