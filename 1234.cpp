// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int balancedString(string s) {
        int n = s.size(), k = n/4;
        
        vector<int> v(26, 0);
        
        for(char c : s)
            v[c - 'A']++; 

        if(v['Q' - 'A'] == k && v['R' - 'A'] == k && v['E' - 'A'] == k && v['W' - 'A'] == k)
            return 0;
        int i = 0, j = 0, ans = n;
        while(j < n)
        {
            v[s[j++] - 'A']--;
            while(i<j && v['Q' - 'A'] <= k && v['R' - 'A'] <= k && v['E' - 'A'] <= k && v['W' - 'A'] <= k)
            {
                v[s[i] - 'A']++;
                ans = min(ans, j-i);
                i++;
            }
        }
        return ans;
    }






int main(){
  
  return 0;
}