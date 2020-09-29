// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> twoSum(vector<int>& num, int target) {
        vector<int> v(2);
        int i = 0, j = num.size()-1;
        while(i < j)
        {
            if(num[i] + num[j] == target)
            {
                v[0] = i+1;
                v[1] = j+1;
                return v;
            }
            else if(num[i] + num[j] < target)
                i++;
            else
                j--;
        }
        return v;
    }





int main(){
  
  return 0;
}