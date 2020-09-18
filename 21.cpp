// time - O(n+m)
// space - O(1)        

#include<bits/stdc++.h>
using namespace std;

    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        ListNode* head, *curr;
        if(l1->val < l2->val)
        {
            head = l1;
            curr = l1;
            l1 = l1->next;
        }
        else
        {
            head = l2;
            curr = l2;
            l2 = l2->next; 
        }
        while(l1 && l2)
        {
            if(l1->val > l2->val)
            {
                curr->next = l2;
                l2=l2->next;
            }
            else
            {
                curr->next = l1;
                l1=l1->next;
            }
            curr = curr->next;
        }
        if(l1)
        {
            curr->next = l1;
        }
        else
        {
            curr->next = l2;
        }
        return head;
    }




int main(){
  
  return 0;
}