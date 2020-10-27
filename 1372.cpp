// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    void dfs(TreeNode* root, int curr, int &hi, bool left)
    {
        if(!root)
        {
            hi = max(curr, hi);
            return ;
        }
        curr++;
        if(left)
        {
            dfs(root->left, curr, hi, 0);
            dfs(root->right, 1, hi, 1);
        }
        else
        {
            dfs(root->right, curr, hi, 1);
            dfs(root->left, 1, hi, 0);
        }
        return ;
    }
    
    int longestZigZag(TreeNode* root) {
        int ans = 1;
        dfs(root, 0, ans, 0);
        return ans-1;
    }




int main(){
  
  return 0;
}