// time - O(n)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;


    TreeNode* rec(vector<int> &pre, int s, int e, int n)
    {
        if(s > e)
            return NULL;
        if(s == e)
        {
            TreeNode*root = new TreeNode (pre[s]);
            return root;
        }
        int idx = s+1;
        TreeNode* root = new TreeNode (pre[s]);
        while(idx < n && pre[idx] < pre[s])
        {
            idx++;
        }
        root->left = rec(pre, s+1, idx -1, n);
        root->right = rec(pre, idx, e, n);
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        return rec(preorder, 0, n-1, n);
    }


int main(){
  
  return 0;
}