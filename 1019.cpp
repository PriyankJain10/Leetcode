// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        if(!head)
            return v;
        v.resize(10000);
        ListNode* curr = head;
        stack<pair<ListNode*, int> > s;
        int i = 0;
        while(curr)
        {
            if(s.empty())
            {
                s.push({curr, i});
            }
            else
            {
                while(s.size() && s.top().first->val < curr->val)
                {
                    v[s.top().second] = curr->val;
                    s.pop();
                }
                s.push({curr, i});
            }
            curr = curr->next;
            i++;
        }
        v.resize(i);
        return v;
    }



int main(){
  
  return 0;
}