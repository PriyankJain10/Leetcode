// time - O(nlogn)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<string> topKFrequent(vector<string>& words, int k) {
        
        map<string, int> freq;
        for(string s : words)
            freq[s]++;
        
        map<int, vector<string> , greater<int> > m;
        for(auto it : freq)
            m[it.second].push_back(it.first);
        
        vector<string> ans;
        for(auto it : m)
        {
            int i = 0;
            while(i < it.second.size() && k)
            {
                k--;
                ans.push_back(it.second[i++]);
            }
            if(k == 0)
                break;
        }
        return ans;
    }




int main(){
  
  return 0;
}