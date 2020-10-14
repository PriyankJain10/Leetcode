// time - O(n*m)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

class MagicDictionary {
public:
    /** Initialize your data structure here. */
    unordered_map<int, vector<string>> m;
    MagicDictionary() {
        m.clear();
    }
    
    void buildDict(vector<string> dictionary) {
        for(string s : dictionary)
            m[s.size()].push_back(s);
        return;
    }
    
    bool search(string searchWord) {
        
        int n = searchWord.size(), count = 0;
        if(m[n].size() == 0)
            return 0;
        for(int i=0;i<m[n].size();i++)
        {
            count = 0;
            for(int j=0;j<n;j++)
            {
                if(m[n][i][j] != searchWord[j])
                    count++;
                if(count > 1)
                    break;
            }
            if(count == 1)
                return 1;
        }
        return 0;
    }
};




int main(){
  
  return 0;
}