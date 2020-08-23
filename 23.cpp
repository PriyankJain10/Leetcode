// time - O(n^2)    
// space - O(1) 

#include<bits/stdc++.h>
using namespace std;


    ListNode* mergeKLists(vector<ListNode*>& v) {
        int n = v.size();
        if(n == 0)
            return NULL;
        ListNode* head = NULL, *curr = NULL;
        bool flag = 1;
        while(flag)
        {
            flag = 0;
            int small = -1;
            for(int i=0;i<n;i++)
            {
                if(v[i])
                {
                    flag = 1;
                    if(small == -1)
                        small = i;
                    else
                    {
                        if(v[i]->val < v[small]->val)
                            small = i;
                    }
                }
            }
            if(small != -1)
            {
                if(head == NULL)
                {
                    head = v[small];
                    curr = v[small];
                    v[small] = v[small]->next;
                }
                else
                {
                    curr->next = v[small];
                    v[small] = v[small]->next;
                    curr = curr->next;
                }
            }
        }
        return head;
    }


int main(){
  
  return 0;
}