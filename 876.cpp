// time - O(n)   
// space - O(1)              

#include<bits/stdc++.h>
using namespace std;

    

    ListNode* middleNode(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* slow = head, *fast = head;
        while(fast && fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        if(!fast->next)
            return slow;
        slow = slow->next;
        return slow;
    }




int main(){
  
  return 0;
}