// time - O(exp(n))   
// space - O(n^2)        

#include<bits/stdc++.h>
using namespace std;

    
    void rec(vector<int> &a, vector<vector<int> > &v, vector<int> curr, int k, int n, int i)
    {
        if(k == 0)
        {
            if(find(v.begin(), v.end(), curr) == v.end())
                v.push_back(curr);
            return ;
        }
        if(i == n || a[i] > k)
            return ;
        rec(a, v, curr, k, n, i+1);
        curr.push_back(a[i]);
        rec(a, v, curr, k-a[i], n, i);
        curr.pop_back();
        return ;
            
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int> > v;
        if(n == 0)
            return v;
        sort(candidates.begin(), candidates.end());
        vector<int> curr;
        rec(candidates, v, curr, target, n, 0);
        return v;
    }




int main(){
  
  return 0;
}