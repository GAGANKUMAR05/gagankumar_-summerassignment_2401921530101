class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL)
        {
            delete head;
            return NULL;
        }
       int i =1;
       ListNode* first = head;
       while(first->next!=NULL)
       {
        i++;
        first = first ->next;
       }
       n=i-n;
       if(n==0)
       {
          return head->next;
       }
       first = head;
       ListNode* prev=NULL;
       while(n>0)
       {
        n--;
        prev= first;
        first = first->next;
       }
       prev->next = first->next;
       delete first;
       return head;
    }
};