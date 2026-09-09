class Solution {
public:
    bool isPalindrome(ListNode* head) {

        ListNode* i = head;
        ListNode* address = NULL;

        while (i != NULL) {

            ListNode* newNode = new ListNode();
            newNode->val = i->val;
            newNode->next = address;

            address = newNode;
            i = i->next;
        }

        i = head;
        ListNode* j = address;

        while (i != NULL) {

            if (i->val != j->val) {
                return false;
            }

            i = i->next;
            j = j->next;
        }

        return true;
    }
};