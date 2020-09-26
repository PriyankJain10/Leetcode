// time - O(n^2)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    typedef long long int ll;
    
    int threeSumMulti(vector<int>& A, int target) {
        ll cnt = 0;
        unordered_map<int, ll> m;
        for(int a : A)
            m[a]++;
        for(auto it1 : m)
        {
            for(auto it2 : m)
            {
                int i = it1.first, j = it2.first, k = target - i - j;
                if(m.count(k) == 0)
                    continue;
                if(i == j && j == k)
                    cnt += (m[i] * (m[i] - 1) * (m[i] - 2))/6;
                else if(i == j && j != k)
                    cnt += (m[i] * (m[i] - 1) * m[k])/2;
                else if(i<j && j<k)
                    cnt += (m[i] * m[j] * m[k]);
            }
        }
        return cnt%(int)(1e9+7);
    }





int main(){
  
  return 0;
}