// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
class BSTIterator {
public:
    stack<int> s;
    
    void fill(TreeNode* root);
    
    BSTIterator(TreeNode* root) {
        while(s.size())
            s.pop();
        fill(root);
    }
    
    /** @return the next smallest number */
    int next() {
        int x = s.top();
        s.pop();
        return x;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !s.empty();
    }
};

void BSTIterator::fill(TreeNode * root)
{
    if(root == NULL)
        return ;
    BSTIterator::fill(root->right);
    s.push(root->val);
    BSTIterator::fill(root->left);
    return ;
}



int main(){
  
  return 0;
}