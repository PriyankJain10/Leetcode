// time - O(n^2)
// space - O(n^2)

#include<bits/stdc++.h>
using namespace std;

    
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<bool> > board(8, vector<bool> (8, 0));
        vector<vector<int> > ans;
        for(int i=0;i<queens.size();i++)
            board[queens[i][0]][queens[i][1]] = 1;
        int i = king[0], j = king[1];
        
        // column
        for(int k=i-1;k>=0;k--)
        {
            if(board[k][j] == 1)
            {
                vector<int> temp(2);
                temp[0] = k;
                temp[1] = j;
                ans.push_back(temp);
                break;
            }
        }
        for(int k=i+1;k<8;k++)
        {
            if(board[k][j] == 1)
            {
                vector<int> temp(2);
                temp[0] = k;
                temp[1] = j;
                ans.push_back(temp);
                break;
            }
        }
        
        //row
        for(int k=j-1;k>=0;k--)
        {
            if(board[i][k] == 1)
            {
                vector<int> temp(2);
                temp[0] = i;
                temp[1] = k;
                ans.push_back(temp);
                break;
            }
        }
        for(int k=j+1;k<8;k++)
        {
            if(board[i][k] == 1)
            {
                vector<int> temp(2);
                temp[0] = i;
                temp[1] = k;
                ans.push_back(temp);
                break;
            }
        }
        
        //diagonals
        for(int k=1;k <= min(i, j);k++)
        {
            if(board[i-k][j-k] == 1)
            {
                vector<int> temp(2);
                temp[0] = i-k;
                temp[1] = j-k;
                ans.push_back(temp);
                break;
            }
        }
        for(int k=1;max(i, j) + k < 8;k++)
        {
            if(board[i+k][j+k] == 1)
            {
                vector<int> temp(2);
                temp[0] = i+k;
                temp[1] = j+k;
                ans.push_back(temp);
                break;
            }
        }
        for(int k=1;k <= i && j+k<8; k++)
        {
            if(board[i-k][j+k] == 1)
            {
                vector<int> temp(2);
                temp[0] = i-k;
                temp[1] = j+k;
                ans.push_back(temp);
                break;
            }
        }
        for(int k=1;k <= j && i+k<8;k++)
        {
            if(board[i+k][j-k] == 1)
            {
                vector<int> temp(2);
                temp[0] = i+k;
                temp[1] = j-k;
                ans.push_back(temp);
                break;
            }
        }
        return ans;
    }




int main(){
  
  return 0;
}