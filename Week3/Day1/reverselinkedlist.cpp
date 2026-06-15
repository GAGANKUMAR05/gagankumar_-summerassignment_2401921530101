class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
        return head;
        ListNode* temp=head;
        ListNode* prev= head;
        ListNode* curr = head->next;
        while(curr)
        {
            temp=curr;
            curr= temp->next;
            temp->next = prev;
            prev = temp;
        }
       head->next= NULL;
       head =temp;
       return head;
        
    }
};