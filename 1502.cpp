// time - O(nlogn)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        if(n < 3)
            return 1;
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];
        for(int i=1;i<n-1;i++)
        {
            if(arr[i+1] - arr[i] != diff)
                return 0;
        }
        return 1;
    }






int main(){
  
  return 0;
}