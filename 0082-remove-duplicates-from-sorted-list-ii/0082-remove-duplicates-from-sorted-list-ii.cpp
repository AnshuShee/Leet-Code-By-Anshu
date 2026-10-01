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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* A = NULL;
        ListNode* B = head;
        ListNode* C = head->next;
        while(C != NULL){
            if(B->val == C->val){
                while(C != NULL && B->val == C->val){
                    C = C->next;
                }
                if(A == NULL){
                    head = C;
                    B = head;
                }
                else{
                    A->next = C;
                    B = C;
                }
            }
            else{
                if(A == NULL) A = head;
                else A = A->next;
                B = B->next;
            }
            if(C != NULL) C = C->next;
        }
        return head;
    }
};