// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    
    int dfs(TreeNode *root, int n, int x, int &left, int &right)
    {
        if(!root)
            return 0;
        
        int l = dfs(root->left, n, x, left, right), r = dfs(root->right, n, x, left, right);
        
        if(root->val == x)
            left = l, right = r;
        return l + r + 1;
        
    }
    
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        int l = 0, r = 0;
        dfs(root, n, x, l, r);
        return max(max(l, r), n-l-r-1) > n/2;
    }



int main(){
  
  return 0;
}