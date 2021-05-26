// time - O(exp(n))   
// space - O(exp(n))              

#include<bits/stdc++.h>
using namespace std;

    

    bool rec(vector<vector<char>> &grid, string &word, int idx, int i, int j)
    {
        if(idx == word.size())
            return 1;
        if(i >= grid.size() || i < 0 || j >= grid[0].size() || j < 0 || grid[i][j] != word[idx])
            return 0;
        
        char c = grid[i][j];
        grid[i][j] = '-';
        int x[4] = {0, 0, 1, -1};
        int y[4] = {1, -1, 0, 0};
        for(int k=0;k<4;k++)
        {
            if(rec(grid, word, idx+1, i+x[k], j+y[k]))
                return 1;
        }
        grid[i][j] = c;
        return 0;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j] == word[0] && rec(board, word, 0, i, j))
                    return 1;
            }
        }
        return 0;
    }




int main(){
  
  return 0;
}