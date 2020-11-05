// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(!root)
            return v;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> temp;
        while(q.size())
        {
            TreeNode* f = q.front();
            q.pop();
            if(f)
            {
                temp.push_back(f->val);
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
            else
            {
                v.push_back(temp);
                temp.clear();
                if(q.size())
                    q.push(NULL);
            }
        }
        return v;
    }




int main(){
  
  return 0;
}