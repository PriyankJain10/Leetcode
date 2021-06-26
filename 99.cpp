// time - O(n)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    
    void store(TreeNode* root, vector<int> &v)
    {
        if(!root)
            return ;
        v.push_back(root->val);
        store(root->left, v);
        store(root->right, v);
        return ;
    }
    
    void recover(TreeNode* root, vector<int> &v, int &i)
    {
        if(!root)
            return ;
        recover(root->left, v, i);
        root->val = v[i++];
        recover(root->right, v, i);
        return ;
    }
    
    void recoverTree(TreeNode* root) {
        vector<int> v;
        store(root, v);
        sort(v.begin(), v.end());
        int i = 0;
        recover(root, v, i);
        return;
    }



int main(){
  
  return 0;
}