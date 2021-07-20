// time - O(n)   
// space - O(log(n)) due to recursion              

#include<bits/stdc++.h>
using namespace std;


    bool check(TreeNode* r1, TreeNode* r2)
    {
        if(!r1 && !r2)
            return 1;
        if(!r1 || !r2)
            return 0;
        if(r1->val != r2->val)
            return 0;
        return check(r1->left, r2->right) && check(r1->right, r2->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        return check(root, root);
    }



int main(){
  
  return 0;
}