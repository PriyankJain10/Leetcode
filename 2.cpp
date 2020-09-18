// time - O(n+m)   
// space - O(n+m)        

#include<bits/stdc++.h>
using namespace std;

    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *a = NULL, *head = NULL;
        bool flag = 1;
        while(l1 || l2 || carry)
        {
            int x = carry;
            if(l1)
            {
                x += l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                x += l2->val;
                l2 = l2->next;
            }
            carry = x/10;
            x = x%10;
            if(flag)
            {
                a = new ListNode(x);
                head = a;
                flag = 0;
            }
            else
            {
                a->next = new ListNode(x);
                a = a->next;
            }
        }
        return head;
    }




int main(){
  
  return 0;
}