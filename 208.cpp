// time - 
// space -       

#include<bits/stdc++.h>
using namespace std;


class Trie {
public:
    /** Initialize your data structure here. */
    bool end;
    Trie **child;
    Trie() {
        end = 0;
        child = new Trie * [26];
        for(int i=0;i<26;i++)
            child[i] = NULL;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* curr = this;
        for(int i=0;i<word.size();i++)
        {
            if(curr->child[word[i] - 'a'] == NULL)
                curr->child[word[i] - 'a'] = new Trie;
            curr = curr->child[word[i] - 'a'];
        }
        curr->end = 1;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* curr = this;
        for(int i=0;i<word.size();i++)
        {
            if(curr->child[word[i] - 'a'] == NULL)
                return 0;
            curr = curr->child[word[i] - 'a'];
        }
        return curr->end;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* curr = this;
        for(int i=0;i<prefix.size();i++)
        {
            if(curr->child[prefix[i] - 'a'] == NULL)
                return 0;
            curr = curr->child[prefix[i] - 'a'];
        }
        return 1;
    }
};


int main(){
  
  return 0;
}