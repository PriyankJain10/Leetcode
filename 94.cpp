// time - O(n)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        
        if(root == NULL)
            return v;
        
        stack<pair<TreeNode*, bool> > s;
        s.push({root, 0});
        while(s.size())
        {
            pair<TreeNode*, bool> t = s.top();
            s.pop();
            if(t.second)
            {
                v.push_back(t.first->val);
            }
            else
            {
                if(t.first->right)
                    s.push({t.first->right, 0});
                s.push({t.first, 1});
                if(t.first->left)
                    s.push({t.first->left, 0});
            }
        }
        return v;
    }




int main(){
  
  return 0;
}