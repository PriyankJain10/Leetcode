// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode *curr = head, *temp = NULL, *h = NULL;
        while(!h && curr)
        {
            while(curr && curr->next && curr->val == curr->next->val)
                curr = curr->next;
            if(curr && curr != head)
                curr = curr->next;
            if(curr && (!curr->next || curr->val != curr->next->val))
            {
                h = curr;
                break;
            }
        }
        if(curr)
            temp = curr->next;
        while(temp && temp->next)
        {
            while(temp && temp->next && temp->val == temp->next->val)
                temp = temp->next;
            if(temp && temp != curr->next)
                temp = temp->next;
            if(!temp || !temp->next || temp->val != temp->next->val)
            {
                curr->next = temp;
                if(temp)
                    temp = temp->next;
                curr = curr->next;
            }
        }
        return h;
    }




int main(){
  
  return 0;
}