// time - O(n)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;

    
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0)
            return head;
        ListNode  *curr = head, *ans = NULL;
        int n = 1;
        while(curr->next)
        {
            curr = curr->next;
            n++;
        }
        if(k%n==0 || n == 1)
            return head;
        curr->next = head;
        curr = head;
        int jumps = n - k%n;
        for(int i=1;;i++)
        {
            if(i == jumps)
            {
                ans = curr->next;
                curr->next = NULL;
                break;
            }
            curr = curr->next;
        }
        return ans;
    }



int main(){
  
  return 0;
}