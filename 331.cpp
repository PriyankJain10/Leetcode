// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    bool isValidSerialization(string preorder) {
        vector<string> v;
        int n = preorder.size();
        if(n == 1)
            return preorder == "#";
        string curr = "";
        for(int i=0;i<n;i++)
        {
            if(preorder[i] == ',')
            {
                v.push_back(curr);
                curr = "";
            }
            else
                curr += preorder[i];
        }
        if(curr != "")
            v.push_back(curr);
        n = v.size();
        int no = 0, nu = 0;
        for(int i=0;i<n;i++)
        {
            if(v[i] == "#")
                nu++;
            else    
                no++;
            if(nu >= no+1 && i<n-1) 
                return 0;
        }
        return no+1 == nu;
    }



int main(){
  
  return 0;
}