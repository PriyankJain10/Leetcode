// time - O(n)   
// space - O(n)     due to recursion           

#include<bits/stdc++.h>
using namespace std;

    
    int rec(TreeNode *root, int &sum, bool &flag)
    {
        if(!root)
            return INT_MIN;
        int l = rec(root->left, sum, flag) , r = rec(root->right, sum, flag);
        int ans = max(0, l) + max(0, r) + root->val;
        int t = max(0, max(l, r)) + root->val;
        if(flag == 0)
        {
            flag = 1;
            sum = ans;
        }
        else
            sum = max(sum, ans);
        return t;
    }
    
    int maxPathSum(TreeNode* root) {
        if(!root)
            return 0;
        bool flag = 0;
        int sum;
        int ans = rec(root, sum, flag);
        return max(ans, sum);
    }




int main(){
  
  return 0;
}