// time - O(n^2)   
// space - O(n^2)              

#include<bits/stdc++.h>
using namespace std;

    

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int old = image[sr][sc];
        image[sr][sc] = newColor;
        int x[4] = {sr, sr, sr-1, sr+1};
        int y[4] = {sc+1, sc-1, sc, sc};
        for(int i=0;i<4;i++)
        {
            if(x[i] >= 0 && x[i] < image.size() && y[i] >= 0 && y[i] < image[0].size() && image[x[i]][y[i]] == old && image[x[i]][y[i]] != newColor)
            {
                floodFill(image, x[i], y[i], newColor);
            }
        }
        return image;
        
    }




int main(){
  
  return 0;
}