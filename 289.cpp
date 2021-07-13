// time - O(n^2)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    
// 0 -> 0 = 0
    // 0 -> 1 = -1
    // 1 -> 1 = 1
    // 1 -> 0 = 2
    
    int get_neighbour_info(vector<vector<int>> &board, int i, int j, int n, int m)
    {
        int cnt = 0;
        int x[8] = {0, 0, -1, -1, -1, 1, 1, 1};
        int y[8] = {1, -1, 0, 1, -1, -1, 1, 0};
        
        for(int k=0;k<8;k++)
        {
            int r = i + x[k], c = j + y[k];
            if(r >= 0 && r < n && c >= 0 && c < m && board[r][c] > 0)
                cnt++;
        }
        return cnt;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int cnt = get_neighbour_info(board, i, j, n, m);
                if(board[i][j] == 1)
                {
                    if(cnt < 2 || cnt > 3)
                        board[i][j] = 2;
                }
                else
                {
                    if(cnt == 3)
                        board[i][j] = -1;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j] == -1)
                    board[i][j] = 1;
                if(board[i][j] == 2)
                    board[i][j] = 0;
            }
        }
        
        return ;
    }



int main(){
  
  return 0;
}