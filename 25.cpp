// time - O(n)    
// space - O(n/k) due to recursion 

#include<bits/stdc++.h>
using namespace std;

    
    int len(ListNode* head)
    {
        int n = 0;
        while(head)
        {
            n++;
            head = head->next;
        }
        return n;
    }
    
    ListNode* solve(ListNode* head, int n, int k)
    {
        if(n<k)
            return head;
        ListNode *curr = head, *prev = NULL, *nxt = NULL;
        for(int i=0;i<k;i++)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head->next = solve(curr, n-k, k);
        return prev;
    }
        
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n = len(head);
        return solve(head, n, k);
    }




int main(){
  
  return 0;
}