// time - O(n)   
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;


    int singleNumber(vector<int>& nums) {
        long long int n = nums.size(), sum = 0, expect = 0;
        unordered_set<int> s;
        for(int i=0;i<n;i++)
        {
            if(s.find(nums[i]) == s.end())
            {
                s.insert(nums[i]);
                expect += (long long int)(nums[i]);
                expect += (long long int)(nums[i]);
                expect += (long long int)(nums[i]);
                
            }
            sum += nums[i];
        }
        expect -= sum;
        return expect / 2;
    }


int main(){
  
  return 0;
}