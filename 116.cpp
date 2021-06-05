// time - O(n)   
// space - O(n)              

#include<bits/stdc++.h>
using namespace std;

    
    Node* connect(Node* root) {
        
        if(!root)
            return root;
    
        queue<Node*> q;
        q.push(root);
        while(q.size())
        {
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                Node*f = q.front();
                q.pop();
                if(i != n-1)
                    f->next = q.front();
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
        }
        return root;
    }



int main(){
  
  return 0;
}