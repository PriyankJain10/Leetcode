// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr = head, *temp = head;
        while(curr && curr->next)
        {
            temp = curr->next;
            while(temp && curr->val == temp->val)
                temp = temp->next;
            curr->next = temp;
            curr = curr->next;
        }
        return head;
    }




int main(){
  
  return 0;
}