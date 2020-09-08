// time - O(nlogn)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        unordered_map<int, bool> m;
        priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
        pq.push(1);
        int k = 1;
        while(k<n)
        {
            long long int x = pq.top();
            pq.pop();
            for(int i=0;i<primes.size();i++)
            {
                long long int y = x*primes[i];
                if(!m[y])
                {
                    pq.push(y);
                    m[y] = 1;
                }
            }
            k++;
        }
        return pq.top();
    }




int main(){
  
  return 0;
}