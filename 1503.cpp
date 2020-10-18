// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans = 0;
        for(int x : left)
            ans = max(x, ans);
        for(int x : right)
            ans = max(ans, n-x);
        return ans;
    }




int main(){
  
  return 0;
}