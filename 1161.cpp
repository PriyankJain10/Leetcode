// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    int maxLevelSum(TreeNode* root) {
        int curr_level = 1, ans = 1, curr_sum = 0, max_sum = INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        TreeNode* f = NULL;
        while(q.size())
        {
            f = q.front();
            q.pop();
            if(f)
            {
                curr_sum += f->val;
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
            else
            {
                if(curr_sum > max_sum)
                {
                    max_sum = curr_sum;
                    ans = curr_level;
                }
                curr_level++;
                curr_sum = 0;
                if(q.size())
                    q.push(NULL);
            }
        }
        return ans;
    }






int main(){
  
  return 0;
}