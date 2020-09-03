// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    int longestWPI(vector<int>& hours) {
        int n = hours.size(), sum = 0, ans = 0;
        for(int i=0;i<n;i++)
        {
            if(hours[i] > 8)
            {
                ans = 1;
                hours[i] = 1;
            }
            else
                hours[i] = -1;
        }
        unordered_map<int, int> m;
        for(int i=0;i<n;i++)
        {
            sum += hours[i];
            if(sum > 0)
                ans = max(ans, i+1);
            if(m.count(sum-1) > 0)
                ans = max(ans, i - m[sum-1]);
            if(m.count(sum) == 0)
                m[sum] = i;
        }
        return ans;
    }



int main(){
  
  return 0;
}