// time - O(n)   
// space - O(logn)               

#include<bits/stdc++.h>
using namespace std;

    

    bool hasPathSum(TreeNode* root, int sum, int curr = 0) {
        if(!root)
            return 0;        
        curr += root->val;
        if(!root->left && !root->right)
            return (sum == curr);
        return hasPathSum(root->left, sum, curr) || hasPathSum(root->right, sum, curr);
    }




int main(){
  
  return 0;
}