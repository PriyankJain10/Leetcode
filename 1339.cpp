// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    
    ll get_sum(TreeNode*root)
    {
        if(!root)
            return 0;
        return get_sum(root->left) + get_sum(root->right) + root->val;
    }
    
    ll rec(TreeNode* root, ll &sum, ll &p)
    {
        if(!root)
            return 0;
        ll l = rec(root->left, sum, p), r = rec(root->right, sum, p);
        
        p = max({p, l*(sum - l), r*(sum-r)});
        return l + r + root->val;
    }
    
    int maxProduct(TreeNode* root) {
        ll sum = get_sum(root), p = 0;
        rec(root, sum, p);
        int m = 1e9+7;
        return p%m;
    }



int main(){
  
  return 0;
}