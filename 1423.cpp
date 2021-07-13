// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size(), sum = 0;
        for(int i=0;i<k;i++)
            sum += cardPoints[i];
        
        if(k == n)
            return sum;
        
        int ans = sum, i = k-1, j = n-1;
        while(i >= 0)
        {
            sum -= cardPoints[i--];
            sum += cardPoints[j--];
            ans = max(ans, sum);
        }
        return ans;
    }



int main(){
  
  return 0;
}