// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int findKthPositive(vector<int>& arr, int k) {
        int cnt = 0, curr = 0, i = 0;
        while(i < arr.size() && cnt < k)
        {
            curr++;
            if(curr == arr[i])
                i++;
            else
                cnt++;
        }
        while(cnt < k)
        {
            curr++;
            cnt++;
        }
        return curr;
    }




int main(){
  
  return 0;
}