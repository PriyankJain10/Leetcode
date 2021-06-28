// time - O(exp(n))   
// space - O(exp(n))              

#include<bits/stdc++.h>
using namespace std;

    
    void rec(vector<string> &v, unordered_set<string> &dic, string &s, string total, string curr, int i)
    {
        if(i == s.size())
        {
            if(dic.find(curr) != dic.end())
            {
                if(total != "")
                    total += " ";
                total += curr;
                v.push_back(total);
            }
            return ;
        }
        
        curr += s[i++];
        rec(v, dic, s, total, curr, i);
        if(dic.find(curr) != dic.end())
        {
            if(total != "")
                total += " ";
            total += curr;
            rec(v, dic, s, total, "", i);
        }
        return;
    }
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dic;
        for(string a : wordDict)
            dic.insert(a);
        vector<string> v;
        rec(v, dic, s, "", "", 0);
        return v;
    }



int main(){
  
  return 0;
}