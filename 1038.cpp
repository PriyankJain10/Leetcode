// time - O(n)
// space - O(logn)      due to recursion 

#include<bits/stdc++.h>
using namespace std;

    TreeNode* rec(TreeNode * root, int &sum)
    {
        if(root == NULL)
            return NULL;
        root->right = rec(root->right, sum);
        root->val += sum;
        sum = root->val;
        root->left = rec(root->left, sum);
        return root;
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        return rec(root, sum);
    }

int main ()
{
    return 0;
}