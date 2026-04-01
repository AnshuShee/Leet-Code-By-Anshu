/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        ListNode* newHead = head->next;
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr && curr->next) {
            ListNode* first = curr;
            ListNode* second = curr->next;

            // Swap
            first->next = second->next;
            second->next = first;

            if (prev) {
                prev->next = second;
            }

            // Move pointers
            prev = first;
            curr = first->next;
        }

        return newHead;
    }
};