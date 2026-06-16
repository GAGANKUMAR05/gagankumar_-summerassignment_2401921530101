class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev= NULL;
        ListNode* curr= head;
        ListNode* fut;
        while(curr)
        {
            fut= curr->next;   
            curr->next=prev;
            prev= curr;
            curr= fut;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
       ListNode* slow= head,*fast = head;
       while(fast!=NULL&&fast->next!=NULL)
       {
         slow= slow->next;
         fast=fast->next->next;
       }
        ListNode* temp=reverse(slow);
        while(temp)
        {
            if(temp->val!=head->val)
            return 0;
            else
            {
                temp=temp->next;
                head=head->next;
            }
        }
        
        return 1;
        
    }
};