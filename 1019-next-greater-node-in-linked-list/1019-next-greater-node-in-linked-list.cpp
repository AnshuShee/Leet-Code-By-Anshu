class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        vector<int> stack;

        ListNode* curr = head;

        while (curr != nullptr) {
            ans.push_back(curr->val);
            curr = curr->next;
        }

        // stack stores indices
        for (int i = 0; i < ans.size(); i++) {

            while (!stack.empty() && ans[i] > ans[stack.back()]) {
                int index = stack.back();
                stack.pop_back();

                ans[index] = ans[i];
            }

            stack.push_back(i);
        }
  
        while (!stack.empty()) {
            ans[stack.back()] = 0;
            stack.pop_back();
        }

        return ans;
    }
};