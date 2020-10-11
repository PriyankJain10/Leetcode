// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

class FindElements {
public:
    unordered_map<int, bool> m;
    void rec(TreeNode* root);
    
    FindElements(TreeNode* root) {
        m.clear();
        rec(root);
    }
    
    bool find(int target) {
        if(m.count(target) > 0)
            return 1;
        return 0;
    }
};

void FindElements::rec(TreeNode* root)
{
    if(root->val == -1)
        root->val = 0;
    m[root->val] = 1;
    if(root->left)
    {
        root->left->val = 2*root->val+1;
        rec(root->left);
    }
    if(root->right)
    {
        root->right->val = 2*root->val+2;
        rec(root->right);
    }
    return ;
}





int main(){
  
  return 0;
}