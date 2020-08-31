// time - O(nlogn)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
    int countPrimeSetBits(int L, int R) {
        vector<int> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        int ans = 0;
        for(int i = L; i <= R; i++)
        {
            int k = i, count = 0;
            while(k)
            {
                if(k&1)
                    count++;
                k = k>>1;
            }
            if(find(v.begin(), v.end(), count)  != v.end())
                ans++;
        }
        return ans;
    }

int main(){
  
  return 0;
}