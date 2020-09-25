// time - O(n^2)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

class WordDictionary {
public:
    /** Initialize your data structure here. */
    unordered_map<int, vector<string> > m;
    WordDictionary() {
        m.clear();
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        m[word.size()].push_back(word);
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        int n = word.size();
        for(int i=0;i<m[n].size();i++)
        {
            bool flag = 1;
            for(int j=0;j<n;j++)
            {
                if(word[j] == '.')
                    continue;
                if(word[j] != m[n][i][j])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)
                return 1;
        }
        return 0;
        
    }
};





int main(){
  
  return 0;
}