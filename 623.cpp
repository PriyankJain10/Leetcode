// time - O(n)   
// space - O(logn)  due to recursion               

#include<bits/stdc++.h>
using namespace std;

    

    TreeNode* rec(TreeNode *root, int v, int d, int curr)
    {
        if(!root)
            return NULL;
        if(curr == d)
        {
            TreeNode* l = root->left, *r = root->right;
            root->left = new TreeNode(v);
            root->right = new TreeNode(v);
            root->left->left = l;
            root->right->right = r;
            return root;
        }
        root->left = rec(root->left, v, d, curr+1);
        root->right = rec(root->right, v, d, curr+1);
        return root;
    }
    
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d == 1)
        {
            TreeNode *r = new TreeNode(v);
            r->left = root;
            return r;
        }
        return rec(root, v, d-1, 1);
    }






int main(){
  
  return 0;
}