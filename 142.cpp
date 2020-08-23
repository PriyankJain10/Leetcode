// time - O(n)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;


    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next)
            return NULL;;
        ListNode* slow = head->next, *fast = head->next->next;
        while(fast && fast->next)
        {
            if(slow == fast)
                break;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast != slow)
            return NULL;
        int len = 1;
        fast = fast->next;
        while(fast != slow)
        {
            fast = fast->next;
            len++;
        }
        slow = head;
        fast = head;
        for(int i=0;i<len;i++)
            fast = fast->next;
        while(slow != fast)
        {
            slow = slow -> next;
            fast = fast->next;
        }
        return slow;
    }


int main(){
  
  return 0;
}