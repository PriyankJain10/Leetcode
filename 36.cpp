// time - O(9*9*3)   
// space - O(9*9)               

#include<bits/stdc++.h>
using namespace std;

    

    bool isValidSudoku(vector<vector<char>>& board) {
        
        // rows
        for(int i=0;i<9;i++)
        {
            vector<bool> v(10);
            for(int j=0;j<9;j++)
            {
                if(board[i][j] == '.')
                    continue;
                int x = board[i][j] - '0';
                if(v[x])
                    return 0;
                v[x] = 1;
            }
        }
        
        // columns
        for(int j=0;j<9;j++)
        {
            vector<bool> v(10);
            for(int i=0;i<9;i++)
            {
                if(board[i][j] == '.')
                    continue;
                int x = board[i][j] - '0';
                if(v[x])
                    return 0;
                v[x] = 1;
            }
        }
        
        // 3X3 grids
        
        vector<vector<bool>> v(9, vector<bool> (10));
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j] == '.')
                    continue;
                int x = board[i][j] - '0';
                if(i < 3)
                {
                    if(j < 3)
                    {
                        if(v[0][x])
                            return 0;
                        v[0][x] = 1;
                    }
                    else if(j < 6)
                    {
                        if(v[1][x])
                            return 0;
                        v[1][x] = 1;
                    }
                    else
                    {
                        if(v[2][x])
                            return 0;
                        v[2][x] = 1;
                    }
                }
                else if(i < 6)
                {
                    if(j < 3)
                    {
                        if(v[3][x])
                            return 0;
                        v[3][x] = 1;
                    }
                    else if(j < 6)
                    {
                        if(v[4][x])
                            return 0;
                        v[4][x] = 1;
                    }
                    else
                    {
                        if(v[5][x])
                            return 0;
                        v[5][x] = 1;
                    }
                }
                else
                {
                    if(j < 3)
                    {
                        if(v[6][x])
                            return 0;
                        v[6][x] = 1;
                    }
                    else if(j < 6)
                    {
                        if(v[7][x])
                            return 0;
                        v[7][x] = 1;
                    }
                    else
                    {
                        if(v[8][x])
                            return 0;
                        v[8][x] = 1;
                    }
                }
            }
        }
        return 1;
    }




int main(){
  
  return 0;
}