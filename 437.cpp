// time - O(2^n)   
// space - O(n)     due to recursion           

#include<bits/stdc++.h>
using namespace std;

    
    int rec(unordered_map<TreeNode*, bool> &m, TreeNode*root, int sum, int curr)
    {
        if(!root)
            return 0;
        curr += root->val;
        int ans = 0;
        if(curr == sum)
            ans++;
        
        ans += rec(m, root->left, sum, curr) + rec(m, root->right, sum, curr);
        if(m[root] == 0)
        {
            m[root] = 1;
            ans += rec(m, root->left, sum, root->val) + rec(m, root->right, sum, root->val);
            if(root->val == sum)
                ans++;
        }
        return ans;
    }
    
    int pathSum(TreeNode* root, int sum) 
    {
        if(!root)
            return 0;
        unordered_map<TreeNode*, bool> m;
        m[root] = 1;
        int ans = rec(m, root, sum, 0);
        return ans;
    }




int main(){
  
  return 0;
}