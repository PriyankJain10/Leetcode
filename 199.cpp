// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if(!root)
            return v;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size())
        {
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* f = q.front();
                q.pop();
                if(i == n-1)
                    v.push_back(f->val);
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
        }
        return v; 
    }




int main(){
  
  return 0;
}