// time - O(n)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    
    TreeNode* rec(vector<int> &in, vector<int> &pos, int s, int e, int a, int b)
    {
        if(s > e || a > b)
            return NULL;
        int i;
        for(i=s;i<=e;i++)
            if(pos[b] == in[i])
                break;
        
        TreeNode* root = new TreeNode (pos[b]);
        root->left = rec(in, pos, s, i-1, a, a+i-s-1);
        root->right = rec(in, pos, i+1, e, a+i-s, b-1);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return rec(inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1);
    }



int main(){
  
  return 0;
}