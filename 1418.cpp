// time - O(nlogn)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        int n = orders.size(), cnt = 0;
        map<string, int> m;
        vector<vector<string>> v;
        vector<string> t;
        t.push_back("Table");
        
        for(int i=0;i<n;i++)
            m[orders[i][2]] = 0;
        
        for(auto d=m.begin();d!=m.end();d++)
        {
            d->second = cnt++;
            t.push_back(d->first);
        }
        
        v.push_back(t);
        t.clear();
        
        map<int, vector<int>> dish;
        
        for(int i=0;i<n;i++)
        {
            int x = stoi(orders[i][1]);
            if(dish.count(x) == 0)
            {
                dish[x].resize(cnt);
            }
            dish[x][m[orders[i][2]]]++;
        }
        for(auto d : dish)
        {
            t.clear();
            t.push_back(to_string(d.first));
            for(int x : d.second)
                t.push_back(to_string(x));
            v.push_back(t);
        }
        return v;
    }





int main(){
  
  return 0;
}