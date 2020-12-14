// time - O(n)   
// space - O(logn)               

#include<bits/stdc++.h>
using namespace std;

    

    void dfs(TreeNode* root, int sum, int curr, vector<int> &v, vector<vector<int>> &ans)
    {
        curr += root->val;
        v.push_back(root->val);
        if(!root->left && !root->right)
        {
            if(sum == curr)
                ans.push_back(v);
            v.pop_back();
            return ;
        }
        if(root->left)
            dfs(root->left, sum, curr, v, ans);
        if(root->right)
            dfs(root->right, sum, curr, v, ans);
        v.pop_back();
        return ;
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ans;
        if(!root)
            return ans;
        vector<int> v;
        dfs(root, sum, 0, v, ans);
        return ans;
    }




int main(){
  
  return 0;
}