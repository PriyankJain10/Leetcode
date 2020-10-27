// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        long long int a = 0, b = 0, i = 0, j = 0, n = nums1.size(), m = nums2.size();
        while(i < n && j < m)
        {
            if(nums1[i] < nums2[j])
                a += nums1[i++];
            
            else if(nums1[i] > nums2[j])
                b += nums2[j++];
                
            else
            {
                long long int x = max(a, b);
                a = x + nums1[i++];
                b = x + nums2[j++];
            }
        }
        while(i < n)
            a += nums1[i++];
        while(j < m)
            b += nums2[j++];
        return max(a, b) % (1000000007);
    }




int main(){
  
  return 0;
}