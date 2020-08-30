// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root == NULL)
            return v;
        unordered_map<TreeNode*, bool> m;
        stack<TreeNode*> s;
        s.push(root);
        TreeNode* t = root;
        while(s.size())
        {
            t = s.top();
            s.pop();
            if(m[t])
            {
                v.push_back(t->val);
                continue;
            }
            m[t] = 1;
            s.push(t);
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