// time - O(exp(n))   
// space - O(exp(n))               

#include<bits/stdc++.h>
using namespace std;

    

    void rec(vector<vector<int>> &v, vector<int> &t, int n, int k, int i)
    {
        if(n == 0 && k == 0)
        {
            if(find(v.begin(), v.end(), t) == v.end())
                v.push_back(t);
            return;
        }
        if(i > 9 || k == 0 || n < i)
            return ;
        
        rec(v, t, n, k, i+1);        
        t.push_back(i);
        rec(v, t, n-i, k-1, i+1);
        t.pop_back();
        return ;
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> v;
        if(n > 45 || (n <= k && n != 1))
            return v;
        
        vector<int> t;
        rec(v, t, n, k, 1);
        
        return v;
    }





int main(){
  
  return 0;
}