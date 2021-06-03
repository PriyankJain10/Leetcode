// time - O(1)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode *curr = head, *prev = NULL, *next;
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }




int main(){
  
  return 0;
}