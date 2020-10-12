// time - O(n)   
// space - O(n)               

#include<bits/stdc++.h>
using namespace std;

    

    Node* rec(unordered_map<int, Node*> &m, Node* curr)
    {
        if(m.count(curr->val) > 0)
            return m[curr->val];
        Node* clone = new Node (curr->val);
        m[curr->val] = clone;
        for(int i=0;i<curr->neighbors.size();i++)
        {
            clone->neighbors.push_back(rec(m, curr->neighbors[i]));
        }
        return clone;
    }
    
    Node* cloneGraph(Node* node) {
        if(node == NULL)
            return NULL;
        unordered_map<int, Node*> m;
        return rec(m, node);
    }





int main(){
  
  return 0;
}