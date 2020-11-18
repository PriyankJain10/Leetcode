// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    vector<int> largestValues(TreeNode* root) {
        vector<int> v;
        if(!root)
            return v;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int hi = INT_MIN;
        while(q.size())
        {
            TreeNode* f = q.front();
            q.pop();
            if(f)
            {
                hi = max(hi, f->val);
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
            else
            {
                v.push_back(hi);
                hi = INT_MIN;
                if(q.size())
                    q.push(NULL);
            }
        }
        return v;
    }




int main(){
  
  return 0;
}