// time - O(n)
// space - O(h)     height of tree

#include<bits/stdc++.h>
using namespace std;

    
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        if(!root->left && !root->right)
            return 1;
        int l = INT_MAX, r = INT_MAX;
        if(root->left)
            l = minDepth(root->left);
        if(root->right)
            r = minDepth(root->right);
        return min(l, r) + 1;
    }




int main(){
  
  return 0;
}