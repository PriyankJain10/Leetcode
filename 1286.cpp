// time - O(exp(n))   
// space - O(exp(n))               

#include<bits/stdc++.h>
using namespace std;

    

class CombinationIterator {
public:
    
    int l;
    set<string> v;
    set<string>::iterator it;
    CombinationIterator(string characters, int combinationLength) {
        v.clear();
        l = combinationLength;
        sort(characters.begin(), characters.end());
        int n = characters.size();
        for(int j=1;j<(1<<n);j++)
        {
            string a = "";
            int x = j, c = 0;
            while(x)
            {
                if(x&1)
                    a += characters[c];
                x = x >> 1;
                c++;
            }
            if(a.size() == l)
                v.insert(a);
        }
        it = v.begin();
    }
    
    string next() {
        string ans = *it;
        it++;
        return ans;
    }
    
    bool hasNext() {
        return it != v.end();
    }
};






int main(){
  
  return 0;
}