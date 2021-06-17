// time - O(n)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    
    TreeNode* rec(vector<int> &pre, vector<int> &in, int s, int e, int &idx)
    {
        if(s > e || idx >= pre.size())
            return NULL;
        
        int i;
        for(i=s;i<=e;i++)
            if(pre[idx] == in[i])
                break;
        if(i > e)
            return NULL;
        TreeNode *root = new TreeNode(pre[idx]);
        idx++;
        root->left = rec(pre, in, s, i-1, idx);
        root->right = rec(pre, in, i+1, e, idx);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int idx = 0;
        return rec(preorder, inorder, 0, inorder.size()-1, idx);    
    }



int main(){
  
  return 0;
}