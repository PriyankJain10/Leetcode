// time - O(exp(n))   
// space - O(n^2)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> v;
        vector<int> a;
        int x = (1<<n);
        for(int i=1;i<x;i++)
        {
            a.clear();
            int j = i, count = 1;
            while(j)
            {
                if(j&1)
                    a.push_back(count);
                count++;
                j = j>>1;
            }
            if(a.size() == k)
                v.push_back(a);
        }
        return v;
    }






int main(){
  
  return 0;
}