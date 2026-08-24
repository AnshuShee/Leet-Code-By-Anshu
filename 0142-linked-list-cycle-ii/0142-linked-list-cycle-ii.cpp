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
    ListNode *detectCycle(ListNode *head) {

       unordered_set<ListNode*> set1;
       while(head!=nullptr)
      {
        if(set1.count(head)){
            return head;
        }
        set1.insert(head);
        head=head->next;
      }

      return NULL;
        
    }
};