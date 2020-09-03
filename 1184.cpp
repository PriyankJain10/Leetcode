// time - O(n)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int ans1 = 0, ans2 = 0, n = distance.size();
        int i = start;
        while((i%n) != destination)
        {
            ans1 += distance[i%n];
            i++;
        }
        i = destination;
        while((i%n) != start)
        {
            ans2 += distance[i%n];
            i++;
        }
        return min(ans1, ans2);
    }



int main(){
  
  return 0;
}