// time - O(n)   
// space - O(n) due to recursion 

#include<bits/stdc++.h>
using namespace std;


    void dfs(TreeNode *root, int &cnt, int max_till_now)
    {
        if(!root)
            return ;
        if(max_till_now <= root->val)
            cnt++;
        max_till_now = max(max_till_now, root->val);
        dfs(root->left, cnt, max_till_now);
        dfs(root->right, cnt, max_till_now);
        return ;
    }
    
    int goodNodes(TreeNode* root) {
        if(!root)
            return 0;
        int cnt = 0;
        dfs(root, cnt, root->val);
        return cnt;
    }


int main(){
  
  return 0;
}