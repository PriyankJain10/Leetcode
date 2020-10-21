// time - O(n)   
// space - O(1)               

#include<bits/stdc++.h>
using namespace std;

    

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow = head, *fast = head;
        for(int i=0;i<n;i++)
        {
            fast = fast->next;
        }
        
        if(!fast)
            return head->next;
        
        while(fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }




int main(){
  
  return 0;
}