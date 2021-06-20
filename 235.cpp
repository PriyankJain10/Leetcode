// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    
    bool dfs(TreeNode *root, TreeNode *p, TreeNode *q, TreeNode *&ans)
    {
        if(!root)
            return 0;
        bool l = dfs(root->left, p, q, ans), r = dfs(root->right, p, q, ans);
        
        if((l && r) || ((l || r) && (root == p || root == q)))
        {
            ans = root;
            return 0;
        }
        if(root == p || root == q || l || r)
            return 1;
        return 0;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = NULL;
        dfs(root, p, q, ans);
        return ans;
    }



int main(){
  
  return 0;
}