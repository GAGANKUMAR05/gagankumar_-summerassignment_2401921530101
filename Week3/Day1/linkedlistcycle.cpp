class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
        return 0;
        ListNode* slow= head;
        ListNode* fast = head->next->next;
        while(!(fast==NULL||fast->next==NULL))
        {
            if(slow==fast)
            return 1;
            slow=slow->next;
            fast= fast->next->next;

        }
        return 0;
    }
};