class Solution {
public:
    bool isPalindrome(ListNode* head) {

        // ListNode* i = head;
        // ListNode* address = NULL;

        // while (i != NULL) {

        //     ListNode* newNode = new ListNode();
        //     newNode->val = i->val;
        //     newNode->next = address;

        //     address = newNode;
        //     i = i->next;
        // }

        // i = head;
        // ListNode* j = address;

        // while (i != NULL) {

        //     if (i->val != j->val) {
        //         return false;
        //     }

        //     i = i->next;
        //     j = j->next;
        // }

        // return true;

           if (head == NULL || head->next == NULL) {
            return true;
        }

        ListNode* i = head;
        ListNode* j = head;

        // Find middle
        while (j->next != NULL && j->next->next != NULL) {
            i = i->next;
            j = j->next->next;
        }

        // i is middle
        ListNode* address = NULL;

        // Reverse second half
        i = i->next;

        while (i != NULL) {
            ListNode* temp = i->next;

            i->next = address;
            address = i;

            i = temp;
        }

        // Compare first half and reversed second half
        i = head;
        j = address;

        while (j != NULL) {

            if (i->val != j->val) {
                return false;
            }

            i = i->next;
            j = j->next;
        }

        return true;

    }
};