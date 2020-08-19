// time - O(nlogn)
// space - O(1)      

#include<bits/stdc++.h>
using namespace std;

    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(), satisfaction.end());
        int sum = 0, cum = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(sum + satisfaction[i] < 0)
                break;
            sum += satisfaction[i];
            cum += sum;
        }
        return cum;
    }
    
int main ()
{
    return 0;
}