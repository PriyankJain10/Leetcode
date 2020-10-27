// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    int check(vector<vector<int>> &grid)
    {
        if(grid[0][0] == grid[0][1] && grid[0][2] == grid[0][0] && grid[0][0] > 0)
            return grid[0][0];
        if(grid[0][0] == grid[1][0] && grid[2][0] == grid[0][0] && grid[0][0] > 0)
            return grid[0][0];
        if(grid[2][0] == grid[2][1] && grid[2][2] == grid[2][0] && grid[2][0] > 0)
            return grid[2][0];
        if(grid[0][2] == grid[1][2] && grid[2][2] == grid[0][2] && grid[0][2] > 0)
            return grid[0][2];
        if(grid[1][1] > 0)
        {
            if(grid[1][1] == grid[0][0] && grid[1][1] == grid[2][2])
                return grid[1][1];
            if(grid[1][1] == grid[0][2] && grid[1][1] == grid[2][0])
                return grid[1][1];
            if(grid[1][1] == grid[1][0] && grid[1][1] == grid[1][2])
                return grid[1][1];
            if(grid[1][1] == grid[0][1] && grid[1][1] == grid[2][1])
                return grid[1][1];
        }
        return 0;
    }
    
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> grid(3, vector<int> (3));
        int i;
        for(i=0;i<moves.size();i++)
        {
            grid[moves[i][0]][moves[i][1]] = i%2+1;
            if(i > 3)
            {
                int x = check(grid);
                if(x == 1)
                    return "A";
                if(x == 2)
                    return "B";
            }
        }
        if(i == 9)
            return "Draw";
        return "Pending";
    }




int main(){
  
  return 0;
}