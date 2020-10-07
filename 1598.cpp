// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int minOperations(vector<string>& logs) {
        int count = 0;
        for(string s : logs)
        {
            if(s == "./")
                continue;
            else if(s == "../")
                count--;
            else 
                count++;
            count = max(0, count);
        }
        return count;
    }






int main(){
  
  return 0;
}