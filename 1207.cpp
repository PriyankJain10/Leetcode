// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m1, m2;
        for(int x : arr)
            m1[x]++;
        for(auto x : m1)
        {
            if(m2[x.second] > 0)
                return 0;
            m2[x.second]++;
        }
        return 1;
    }





int main(){
  
  return 0;
}