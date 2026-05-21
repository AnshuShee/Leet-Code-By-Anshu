class Solution {
public:
    vector<vector<int>> result;

    void backtrack(vector<int>& nums, vector<int>& subset, int index) {
        // Store current subset
        result.push_back(subset);

        for (int i = index; i < nums.size(); i++) {
            // Include current element
            subset.push_back(nums[i]);

            // Recur for next elements
            backtrack(nums, subset, i + 1);

            // Backtrack
            subset.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        backtrack(nums, subset, 0);
        return result;
    }
};