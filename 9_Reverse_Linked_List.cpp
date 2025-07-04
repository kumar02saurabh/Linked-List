ListNode* reverseList(ListNode* head) {
       ListNode*prev = NULL, *curr = head, *fut = NULL;
        while(curr)
        {
            fut = curr->next;
            curr ->next = prev;
            prev = curr;
            curr =fut;
        }
        head = prev;
        return head;
