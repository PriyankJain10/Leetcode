// time - O(n^2)   
// space - O(n^2)        

#include<bits/stdc++.h>
using namespace std;

    
    vector<vector<int>> generateMatrix(int n) {
        int curr = 1, i = 0, j = 0, k = (n+1)/2;
        vector<vector<int> > v(n, vector<int> (n));
        for(int x=0;x<k;x++)
        {
            while(j<n-x-1)
                v[i][j++] = curr++;
            while(i<n-x-1)
                v[i++][j] = curr++;
            while(j>x)
                v[i][j--] = curr++;
            while(i>x)
                v[i--][j] = curr++;
            i++;
            j++;
        }
        if(n%2)
            v[i-1][j-1] = curr++;
        return v;
    }




int main(){
  
  return 0;
}