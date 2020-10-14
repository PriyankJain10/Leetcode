// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int numRabbits(vector<int>& answers) {
        int n = answers.size();
        if(n < 2)
            return n;
        unordered_map<int, int> m;
        for(int i : answers)
            m[i]++;
        
        int count = 0;
        for(auto it : m)
        {
            int x = it.first + 1, y = it.second / x;
            if(it.second % x)
                y++;
            count += x*y;
        }
        return count;
    }
};



int main(){
  
  return 0;
}