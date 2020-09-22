// time - O(n)   
// space - O(n)     due to recursion       

#include<bits/stdc++.h>
using namespace std;

    
    pair<int, int> rec(TreeNode* root)
    {
        if(!root)
            return {0, 0};
        pair<int, int> l = rec(root->left), r = rec(root->right), t = {0, 0};
        
        // first - height
        // second - diameter
        
        t.first = 1 + max(l.first, r.first);
        t.second = max(max(l.second, r.second), 1 + l.first + r.first);
        
        return t;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        pair<int, int> t = rec(root);
        return t.second-1;
    }




int main(){
  
  return 0;
}