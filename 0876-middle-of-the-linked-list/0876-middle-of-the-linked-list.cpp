/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        int size = 0;

        ListNode* i = head;

        while (i != NULL) {
            size++;
            i = i->next;
        }

        int mid = size / 2;

        i = head;

        int count = 0;

        while (count < mid) {
            i = i->next;
            count++;
        }

        return i;
    }
};