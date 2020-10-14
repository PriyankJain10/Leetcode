// time - O(logn)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

class TimeMap {
public:
    /** Initialize your data structure here. */
    unordered_map<string, vector<int>> k;
    unordered_map<int, string> t;
    TimeMap() {
        k.clear(), t.clear();
    }
    
    void set(string key, string value, int timestamp) {
        k[key].push_back(timestamp);
        t[timestamp] = value;
        return ;
    }
    
    string get(string key, int timestamp) {
        if(k.count(key) == 0 || k[key].size() == 0 || timestamp < k[key][0])
            return "";
        int i = 0;
        auto it = upper_bound(k[key].begin(), k[key].end(), timestamp);
        if(it == k[key].end())
            i = k[key].size()-1;
        else
            i = (it - k[key].begin()) - 1;
        return t[k[key][i]];
    }
};




int main(){
  
  return 0;
}