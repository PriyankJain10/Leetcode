// time - O(nlogn)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    string frequencySort(string s) {
        unordered_map<char, int> f;
        map<int, vector<char>, greater<int> > m;
        for(char c : s)
            f[c]++;
        for(auto it : f)
            m[it.second].push_back(it.first);
        int i = 0;
        for(auto it : m)
        {
            for(int j=0;j<it.second.size();j++)
            {
                for(int k=0;k<it.first;k++)
                    s[i++] = it.second[j];
            }
        }
        return s;
    }





int main(){
  
  return 0;
}