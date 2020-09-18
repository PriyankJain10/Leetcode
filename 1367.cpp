// time - O(exp(n))
// space - O(exp(n))        due to recursion

#include<bits/stdc++.h>
using namespace std;

    
    bool help(ListNode*head,TreeNode*root){
        if(head==NULL)return true;
        if(!root)return false;
        
        
        bool ans=help(head->next,root->right);
        bool ans2=help(head->next,root->left);
        return root->val==head->val && (ans||ans2);
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(!root){
            return false;
        }
        return help(head,root)||isSubPath(head,root->left) || isSubPath(head,root->right);
    }




int main(){
  
  return 0;
}