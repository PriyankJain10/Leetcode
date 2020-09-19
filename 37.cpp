// time - O(exp(n))   
// space - O(n^2)        

#include<bits/stdc++.h>
using namespace std;

    
        bool isSafe(vector<vector<char>> &grid, int row, int col, char k)
    {
        // row and col
        
        for(int i=0;i<9;i++)
            if(grid[row][i] == k || grid[i][col] == k)
                return 0;
        
        // sub matrix
        if(row>=0 && row<=2)
        {
            for(int i=0;i<=2;i++)
            {
                if(col>=0 && col<=2)
                {
                    for(int j=0;j<=2;j++)
                    {
                        if(grid[i][j] == k)
                        {
                            return 0;
                        }
                    }
                }
                else if(col>=3 && col<=5)
                {
                    for(int j=3;j<=5;j++)
                    {
                        if(grid[i][j] == k)
                            return 0;
                    }
                }
                else
                {
                    for(int j=6;j<=8;j++)
                    {
                        if(grid[i][j] == k)
                            return 0;
                    }
                }
            }
        }
        else if(row>=3 && row<=5)
        {
            for(int i=3;i<=5;i++)
            {
                if(col>=0 && col<=2)
                {
                    for(int j=0;j<=2;j++)
                    {
                        if(grid[i][j] == k)
                        {
                            return 0;
                        }
                    }
                }
                else if(col>=3 && col<=5)
                {
                    for(int j=3;j<=5;j++)
                    {
                        if(grid[i][j] == k)
                            return 0;
                    }
                }
                else
                {
                    for(int j=6;j<=8;j++)
                    {
                        if(grid[i][j] == k)
                            return 0;
                    }
                }
            }
        }
        else
        {
            for(int i=6;i<=8;i++)
            {
                if(col>=0 && col<=2)
                {
                    for(int j=0;j<=2;j++)
                    {
                        if(grid[i][j] == k)
                        {
                            return 0;
                        }
                    }
                }
                else if(col>=3 && col<=5)
                {
                    for(int j=3;j<=5;j++)
                    {
                        if(grid[i][j] == k)
                            return 0;
                    }
                }
                else
                {
                    for(int j=6;j<=8;j++)
                    {
                        if(grid[i][j] == k)
                            return 0;
                    }
                }
            }
        }
        return 1; 
    }
    
    bool solve(vector<vector<char>> &grid)
    {
        bool flag = 1;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(grid[i][j] == '.')
                {
                    flag = 0;
                    for(char c='1'; c<='9';c++)
                    {
                        if(isSafe(grid, i, j, c))
                        {
                            grid[i][j] = c;
                            if(solve(grid))
                                return 1;
                            grid[i][j] = '.';
                        }
                    }
                    if(flag == 0)
                        return 0;
                }
            }
        }
        return flag;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
        return ;
    }




int main(){
  
  return 0;
}