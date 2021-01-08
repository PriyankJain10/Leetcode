// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        for(int i=1;i<word1.size();i++)
        {
            word1[0] += word1[i];
        }
        for(int i=1;i<word2.size();i++)
        {
            word2[0] += word2[i];
        }
        return word1[0] == word2[0];
    }




int main(){
  
  return 0;
}