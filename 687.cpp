// time - O(n)
// space - O(n) due to recursion   

#include<bits/stdc++.h>
using namespace std;


    int help(TreeNode *root, int &ans)
    {
        if(!root)
            return 0;
        int l = help(root->left, ans);
        int r = help(root->right, ans);
        int ml = (root->left && root->left->val == root->val ? l+1 : 0);
        int mr = (root->right && root->right->val == root->val ? r+1 : 0);
        ans = max(ans, ml + mr);
        return max(ml, mr);
    }
    
    int longestUnivaluePath(TreeNode* root) {
        int ans = 0;
        help(root, ans);
        return ans;
    }


int main(){
  
  return 0;
}