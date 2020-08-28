// time - O(1)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
class ProductOfNumbers {
public:
    vector<int> v;
    int n;
    ProductOfNumbers() {
        v.clear();
        v.push_back(1);
        n = 1;
    }
    
    void add(int num) {
        if(num == 0)
        {
            v.clear();
            v.push_back(1);
            n = 1;
        }
        else
        {
            v.push_back(v[n-1] * num);
            n++;
        }
        return ;
    }
    
    int getProduct(int k) {
        if(k>=n)
            return 0;
        return v[n-1]/v[n-k-1];
    }
};


int main(){
  
  return 0;
}