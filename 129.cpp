// time - O(n)   
// space - O(logn)               

#include<bits/stdc++.h>
using namespace std;

    

    void dfs(TreeNode* root, int num, unordered_map<int, int> &m)
    {
        if(!root)
            return ;
        num = num*10 + root->val;
        if(!root->left && !root->right)
        {
            m[num]++;
            return ;
        }
        dfs(root->left, num, m);
        dfs(root->right, num, m);
        return ;
    }
    
    int sumNumbers(TreeNode* root) {
        unordered_map<int, int> m;
        dfs(root, 0, m);
        int ans = 0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            ans += it->second * it->first;
        }
        return ans;
    }




int main(){
  
  return 0;
}