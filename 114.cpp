// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    
    TreeNode* rec(TreeNode* root)
    {
        TreeNode* l = root->left, *r = root->right;
        root->left = NULL;
        root->right = NULL;
        if(l)
            root->right = rec(l);
        if(!r)
            return root;
        TreeNode* curr = root;
        while(curr->right)
            curr = curr->right;
        curr->right = rec(r);
        return root;
    }    
    
    void flatten(TreeNode* root) {
        if(!root)
            return ;
        rec(root);
        return ;
    }



int main(){
  
  return 0;
}