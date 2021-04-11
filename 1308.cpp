// time - O(n^2)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    

    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size())
        {
            int n = q.size();
            sum = 0;
            for(int i=0;i<n;i++)
            {
                TreeNode* f = q.front();
                q.pop();
                sum += f->val;
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
        }
        return sum;
    }




int main(){
  
  return 0;
}