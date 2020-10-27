// time - O(nlogn)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    string makeLargestSpecial(string S) {
        if(S.size() == 0)
            return S;
        vector<string> v;
        int cnt = 0;
        for(int i=0, j=0; j<S.size();j++)
        {
            if(S[j] == '1')
                cnt++;
            else
                cnt--;
            if(cnt == 0)
            {
                v.push_back("1" + makeLargestSpecial(S.substr(i+1, j-i-1)) + "0");
                i = j+1;
            }
        }
        sort(v.begin(), v.end(), greater<string> ());
        string ans = "";
        for(int i=0;i<v.size();i++)
            ans += v[i];
        
        return ans;
    }




int main(){
  
  return 0;
}