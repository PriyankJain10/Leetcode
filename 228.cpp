// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<string> summaryRanges(vector<int>& nums) {
        int i = 0, n = nums.size();
        vector<string> v;
        if(n == 0)
            return v;
        if(n == 1)
        {
            v.push_back(to_string(nums[0]));
            return v;
        }
        while(i < n)
        {
            int start = i, last = i;
            while(last < n-1 && nums[last]+1 == nums[last+1])
                last++;
            string s = "";
            if(nums[start] < 0)
            {
                long a = nums[start];
                s = "-" + to_string(abs(a));
            }
            else
                s = to_string(nums[start]);
            
            if(last != start)
            {
                if(nums[last] < 0)
                {
                    long a = nums[last];
                    s += "->-" + to_string(abs(a));
                }
                else
                    s += "->" + to_string(nums[last]);
            }
            
            v.push_back(s);
            i = last+1;
        }
        return v;
    }




int main(){
  
  return 0;
}