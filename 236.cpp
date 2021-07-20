// time - O(n)   
// space - O(log(n)) due to recursion              

#include<bits/stdc++.h>
using namespace std;


    bool dfs(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode *&lca)
    {
        if(lca)
            return 0;
        if(!root)
            return 0;
        if(!root->left && !root->right)
        {
            if(root == p || root == q)
                return 1;
            return 0;
        }
        int l = dfs(root->left, p, q, lca), r = dfs(root->right, p, q, lca);
        
        if(root == p || root == q)
        {
            if(l || r)
            {
                lca = root;
                return 0;
            }
            return 1;
        }
        
        if(l && r)
        {
            lca = root;
            return 0;
        }
        return l || r;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* lca = NULL;
        dfs(root, p, q, lca);
        return lca;
    }



int main(){
  
  return 0;
}