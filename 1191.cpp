// time - O(n)
// space - O(1)      

#include<bits/stdc++.h>
using namespace std;


int kConcatenationMaxSum(vector<int>& arr, int k) 
{
        int n = arr.size();
        const int m = 1000000007;
        if(k < 3)
        {
            int curr = 0, ans = 0;
            for(int i=0;i<k*n;i++)
            {
                curr += arr[i%n];
                if(curr < 0)
                    curr = 0;
                ans = max(ans, curr);
            }
            return ans;
        }
        long int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
        }
        long int s = 0, e = 0, curr = 0, as = 0, ae = 0, ans = 0;
        for(int i=0;i<3*n;i++)
        {
            curr += arr[i%n];
            e = i;
            if(curr < 0)
            {
                curr = 0;
                s = i+1;
            }
            if(curr > ans)
            {
                ans = curr;
                as = s;
                ae = e;
            }
        }
        if(ae - as >= n)
        {
            ans += ((k-3)%m * sum%m)%m;
            ans = ans % m;
        }
        return ans%m;
}


int main(){
  
  return 0;
}