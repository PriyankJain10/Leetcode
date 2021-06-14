// time - O(nlogn)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    
    static bool comp(vector<int> &a, vector<int> &b)
    {
        return a[1] < b[1]; 
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), comp);
        int ans = 0, i = boxTypes.size()-1;
        while(truckSize > 0 && i >= 0)
        {
            int n = min(truckSize, boxTypes[i][0]);
            ans += n*boxTypes[i][1];
            truckSize -= n;
            i--;
        }
        return ans;
    }



int main(){
  
  return 0;
}