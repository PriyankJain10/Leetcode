// time - O(n)    
// space - O(n) 

#include<bits/stdc++.h>
using namespace std;

    
    bool isPalindrome(ListNode* head) {
        int n = 0;
        ListNode* curr = head;
        while(curr)
        {
            n++;
            curr = curr->next;
        }
        vector<int> v(n);
        curr = head;
        for(int i=0;i<n;i++)
        {
            v[i] = curr->val;
            curr = curr->next;
        }
        int i=0, j=n-1;
        while(i<j)
        {
            if(v[i]!=v[j])
                return 0;
            i++;
            j--;
        }
        return 1;
    }



int main(){
  
  return 0;
}