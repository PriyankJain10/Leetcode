// time - O(n)
// space - O(1)      

#include<bits/stdc++.h>
using namespace std;


bool works(int k, int m, vector<int> &p)
    {
        int n = p.size();
        int last = p[0];
        m --; 
        for(int i=0;i<n;i++)
        {
            if(p[i] - last >= k && m>0)
            {
                last = p[i];
                m--;
            }
            if(m == 0)
                break;
        }
        return m == 0;
    }
    
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());
        int l = 1, h = 1e9, ans = 1;
        while(l<=h)
        {
            int mid = (l + h)/2;
            if(works(mid, m, position))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                h = mid - 1;
        }
        return ans;
    }


int main(){
  
  return 0;
}