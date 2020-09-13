// time - O(n)
// space - O(n)

#include<bits/stdc++.h>
using namespace std;

    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int> > v;
        if(!root)
            return v;
        vector<int> temp;
        bool flag = 0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(q.size())
        {
            TreeNode *f = q.front();
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
                if(q.size())
                    q.push(NULL);
                if(flag)
                    reverse(temp.begin(),temp.end());
                v.push_back(temp);
                temp.clear();
                flag = !flag;
            }
        }
        return v;
    }




int main(){
  
  return 0;
}