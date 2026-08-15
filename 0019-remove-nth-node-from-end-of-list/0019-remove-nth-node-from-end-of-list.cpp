class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=nullptr;
        int k=n;
        while (k>0)
        {
            fast=fast->next;
            k--;
        }
        while (fast != nullptr)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        if (prev != nullptr)
            prev->next=slow->next;
        else
            head=head->next;

        return head;        
    }
};