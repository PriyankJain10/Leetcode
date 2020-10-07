// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    unordered_map<int, bool > m;
    bool canReach(vector<int>& arr, int start) {
        if(start >= 0 && start < arr.size() && m[start] == 0)
        {
            m[start] = 1;
            return arr[start] == 0 || canReach(arr, start + arr[start]) || canReach(arr, start - arr[start]);
        }
        return 0;
    }






int main(){
  
  return 0;
}