// time - O(n)   
// space - O(h) (h is the height of the bst)               

#include<bits/stdc++.h>
using namespace std;

    

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
            return NULL;
        if(root->val < key)
        {
            root->right = deleteNode(root->right, key);
            return root;            
        }
        else if(root->val > key)
        {
            root->left = deleteNode(root->left, key);
            return root;
        }
        
        if(!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        else if(root->left && root->right)
        {
            TreeNode *temp = root;
            temp = temp->right;
            while(temp->left)
                temp = temp->left;
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
            return root;
        }
        else if(root->left)
        {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        TreeNode *temp = root->right;
        delete root;
        return temp;
    }




int main(){
  
  return 0;
}