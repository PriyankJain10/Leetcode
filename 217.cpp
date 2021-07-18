// time - O(n)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;


    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i : nums)
        {
            if(s.find(i) != s.end())
                return 1;
            s.insert(i);
        }
        return 0;
    }



int main(){
  
  return 0;
}