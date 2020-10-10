// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int rec(unordered_map<int, vector<int> > &sub, unordered_map<int, int> &imp, int id)
    {
        if(imp[id] == 0)
            return 0;
        int ans = imp[id];
        imp[id] = 0;
        for(int i=0;i<sub[id].size();i++)
        {
            ans += rec(sub, imp, sub[id][i]);
        }
        return ans;
    }
    
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, vector<int> > sub;
        unordered_map<int, int> imp;
        for(int i=0;i<employees.size();i++)
        {
            sub[employees[i]->id] = employees[i]->subordinates;
            imp[employees[i]->id] = employees[i]->importance;
        }
        return rec(sub, imp, id);
    }





int main(){
  
  return 0;
}