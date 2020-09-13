// time - O(n)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        if(!root)
            return v;
        stack<TreeNode*> s;
        s.push(root);
        while(s.size())
        {
            TreeNode* t = s.top();
            s.pop();
            v.push_back(t->val);
            if(t->right)
                s.push(t->right);
            if(t->left)
                s.push(t->left);
        }
        return v;
    }




int main(){
  
  return 0;
}