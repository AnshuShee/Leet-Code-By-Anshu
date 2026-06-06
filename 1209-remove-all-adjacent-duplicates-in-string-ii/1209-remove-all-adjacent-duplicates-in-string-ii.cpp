class Solution {
public:
    string removeDuplicates(string s, int k) {
        string ans = "";
        vector<int> count;

        for(char ch : s) {
            ans.push_back(ch);

            if(ans.size() == 1 || ans.back() != ans[ans.size() - 2]) {
                count.push_back(1);
            } else {
                count.back()++;

                if(count.back() == k) {
                    for(int i = 0; i < k; i++) {
                        ans.pop_back();
                    }
                    count.pop_back();
                }
            }
        }

        return ans;
    }
};