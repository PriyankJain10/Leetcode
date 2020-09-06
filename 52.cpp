// time - O(exp in n)    
// space - O(n^2) 

#include<bits/stdc++.h>
using namespace std;

    
    bool isSafe(bool **board, int n, int r, int c)
    {
        // row
        for(int i=0;i<n;i++)
            if(i != c && board[r][i])
                return 0;
        // column
        for(int i=0;i<n;i++)
            if(i != r && board[i][c])
                return 0;
        
        // diagonal
        int i = r-1, j = c-1;
        while(i>=0 && j>=0)
            if(board[i--][j--])
                return 0;
        i = r+1, j = c+1;
        while(i<n && j<n)
            if(board[i++][j++])
                return 0;
        
        // anti diagonal
        i = r+1, j = c-1;
        while(i<n && j>=0)
            if(board[i++][j--])
                return 0;
        i = r-1, j = c+1;
        while(i>=0 && j<n)
            if(board[i--][j++])
                return 0;
        
        return 1;
    }
    
    void solve(bool **board, int n, int r, int &ans)
    {
        if(r == n)
        {
            ans++;
            return ;
        }
        for(int i=0;i<n;i++)
        {
            if(isSafe(board, n, r, i))
            {
                board[r][i] = 1;
                solve(board, n, r+1, ans);
                board[r][i] = 0;
            }
        }
        return ;
    }
    
    int totalNQueens(int n) {
        bool **board = new bool *[n];
        for(int i=0;i<n;i++)
            board[i] = new bool [n]();
        
        int ans = 0;
        
        solve(board, n, 0, ans);
        
        for(int i=0;i<n;i++)
            delete [] board[i];
        delete [] board;
        return ans;
    }




int main(){
  
  return 0;
}