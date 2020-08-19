// time - O(n)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
        vector<int> v(2);
        int n = nums.size();
        if(n == 2)
        {
            v[0] = 0;
            v[1] = 1;
            return v;
        }
        unordered_map<int , int> m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]] = i+1;
        }
        for(int i=0;i<n-1;i++)
        {
            int x = target - nums[i];
            if(m[x] > 0 && m[x] != i+1)
            {
                v[0] = i;
                v[1] = m[x] - 1;
            }
        }
        return v;
}

int main ()
{
    return 0;
}