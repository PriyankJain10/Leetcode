// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int j = 0;
        for(int i=1;i<=n && j<target.size() ;i++)
        {
            if(i == target[j])
            {
                v.push_back("Push");
                j++;
            }
            else
            {
                v.push_back("Push");
                v.push_back("Pop");
            }
        }
        return v;
    }


int main(){
  
  return 0;
}