// time - O(n+m)   
// space - O(n+m)        

#include<bits/stdc++.h>
using namespace std;

    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<int> v(n+m);
        int i = 0, j = 0, k = 0;
        while(i<n && j<m)
        {
            if(nums1[i] < nums2[j])
                v[k++] = nums1[i++];
            else
                v[k++] = nums2[j++];
        }
        while(j<m)
            v[k++] = nums2[j++];
        while(i<n)
            v[k++] = nums1[i++];
        if((n+m)%2)
            return v[(n+m)/2];
        double d = (double)(v[(n+m)/2] + v[(n+m)/2 - 1])/2.0;
        return d;   
    }




int main(){
  
  return 0;
}