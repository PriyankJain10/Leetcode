// time - O(nlogn)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;


    int getKth(int lo, int hi, int k) {
        vector<pair<int, int>> v(hi - lo + 1);
        for(int i = lo;i <= hi;i++)
        {
            int x = i, count = 0;
            while(x != 1)
            {
                if(x%2)
                    x = 3*x+1;
                else
                    x/=2;
                count ++;
            }
            v[i-lo] = {count, i};
        }
        sort(v.begin(), v.end());
        return v[k-1].second;
    }


int main(){
  
  return 0;
}