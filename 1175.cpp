// time - O(nloglogn)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    const int m = 1e9+7;
    void Sieve(vector<bool> &p, int n)
    {
        p[0] = 0;
        p[1] = 0;
        p[2] = 1;
        for(int i=3;i<=n;i+=2)
            p[i] = 1;
        for(int i=3;i<=n;i+=2)
        {
            if(p[i])
            {
                for(int j=i*i;j<=n;j+=2*i)
                    p[j] = 0;
            }
        }
        return ;
    }
    
    int fact(int a)
    {
        if(a < 3)
            return max(a, 1); 
        long long int ans = 2, i;
        for(i=3;i<=a;i++)
        {
            ans = (ans*i)%m;
        }
        return ans%m;
    }
    
    int numPrimeArrangements(int n) {
        if(n < 2)
            return 1;
        vector<bool> p(n+1, 0);
        Sieve(p, n);
        int prime = 0;
        for(int i=2;i<=n;i++)
            if(p[i])
                prime++;
        long long int a1 = fact(prime)%m , a2 = fact(n - prime)%m;
        return (a1%m * a2%m)%m; 
    }


int main(){
  
  return 0;
}