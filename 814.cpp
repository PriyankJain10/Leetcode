// time - O(n)   
// space - O(log(n)) due to recursion              

#include<bits/stdc++.h>
using namespace std;


    TreeNode* pruneTree(TreeNode* root) {
        if(!root)
            return root;
        TreeNode *l = pruneTree(root->left) , *r = pruneTree(root->right);
        root->left = l;
        root->right = r;
        
        if(root->val == 1)
            return root;
        
        if(!l && !r)
            return NULL;
        
        return root;
    }


int main(){
  
  return 0;
}