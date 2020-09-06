// time - O(n)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode *curr = head, *prev = NULL, *nxt;
        while(curr && curr->next)
        {
            nxt = curr->next;
            if(prev)
            {
                prev->next = curr->next;
            }
            else
            {
                head = nxt;
            }
            curr->next = nxt->next;
            nxt->next = curr;
            prev = curr;
            curr = curr->next;
        }
        return head; 
    }




int main(){
  
  return 0;
}