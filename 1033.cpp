// time - O(1)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
    vector<int> numMovesStones(int a, int b, int c) {
        int x = min(a, min(b, c)), z = max(a, max(b, c));
        int y;
        if((x == a && z == b) || (x == b && z == a))
            y = c;
        if((x == a && z == c) || (x == c && z == a))
            y = b;
        if((x == b && z == c) || (x == c && z == b))
            y = a;
        vector<int> ans(2, 0);
        if(x == y-1 && y == z-1)
            return ans;
        if(x == y-2 || y == z-2 || x == y-1 || y == z-1)
            ans[0] = 1;
        else
            ans[0] = 2;
        ans[1] = z - x - 2;
        ans[0] = min(ans[0], ans[1]);
        
        return ans;
    }


int main(){
  
  return 0;
}