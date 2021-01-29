// time - O(n)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    

    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> s(wordList.begin(), wordList.end());
        queue<string> q;
        q.push(beginWord);
        int ans = 1;
        while(!q.empty())
        {
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                string f = q.front();
                q.pop();
                if(f == endWord)
                    return ans;
                s.erase(f);
                for(int j=0;j<f.size();j++)
                {
                    char p = f[j];
                    for(int k=0;k<26;k++)
                    {
                        f[j] = 'a' + k;
                        if(s.find(f)!=s.end())
                            q.push(f);
                    }
                    f[j] = p;
                }
            }
            ans++;
        }
        return 0;
    }




int main(){
  
  return 0;
}