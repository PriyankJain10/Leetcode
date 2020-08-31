// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> v(n);
        stack<int> s;
        int start = 0;
        for(string t : logs)
        {
            int id = 0, i = 0, time = 0;
            while(t[i] <='9' && t[i] >= '0')
                i++;
            id = stoi(t.substr(0, i));
            if(t[i+1] == 's')
            {
                i+=7;
                time = stoi(t.substr(i)); 
                if(s.size())
                    v[s.top()] += time - start - 1;
                start = time;
                s.push(id);
            }
            else
            {
                i+=5;
                time = stoi(t.substr(i));
                v[id] += time - start + 1;
                start = time;
                s.pop();
            }
        }
        return v;
    }


int main(){
  
  return 0;
}