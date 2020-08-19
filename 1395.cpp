// time - O(n^2)
// space - O(1)      

#include<bits/stdc++.h>
using namespace std;

    int numTeams(vector<int>& rating) {
        int n = rating.size(), ans = 0;
        for(int i=1;i<n-1;i++)
        {
            int ll = 0, ls = 0, rl = 0, rs = 0;
            for(int j=0;j<i;j++)
            {
                if(rating[j] < rating[i])
                    ls++;
                if(rating[j] > rating[i])
                    ll++;
            }
            for(int j=i+1;j<n;j++)
            {
                if(rating[j] > rating[i])
                    rl++;
                if(rating[j] < rating[i])
                    rs++;
            }
            ans += rs*ll + rl*ls;
        }
        return ans;
    }
    
int main ()
{
    return 0;
}