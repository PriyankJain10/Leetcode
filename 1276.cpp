// time - O(1)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> v;
        if(tomatoSlices%2 || cheeseSlices > tomatoSlices/2 || cheeseSlices < tomatoSlices/4)
            return v;
        int j = tomatoSlices/2 - cheeseSlices, s = cheeseSlices - j;
        v.push_back(j);
        v.push_back(s);
        return v;
    }




int main(){
  
  return 0;
}