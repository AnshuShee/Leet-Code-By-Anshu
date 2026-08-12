class Solution {
public:
    ListNode* removeNodes(ListNode* head) {

        ListNode* curr = head;
        ListNode* prev = nullptr;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
        int max = head->val;
        curr = head;

        while (curr && curr->next) {

            if (curr->next->val < max) {
                curr->next = curr->next->next;
            }
            else {
                curr = curr->next;
                max = curr->val;
            }

        }

         prev = nullptr;
        curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};