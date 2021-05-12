// time - O(nlogn)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    static bool comp(vector<int> &a, vector<int> &b)
    {
        return a[1] < b[1];
    }
    
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        sort(pairs.begin(), pairs.end(), comp);
        
        int ans = 1, last = 0;
        for(int i=1;i<n;i++)
        {
            if(pairs[i][0] > pairs[last][1])
            {
                ans++;
                last = i;
            }
        }
        return ans;
    }




int main(){
  
  return 0;
}