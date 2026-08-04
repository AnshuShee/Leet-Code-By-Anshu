class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min_val = nums[0];
        int max_val = nums[0];
        
        for (int num : nums) {
            min_val = min(min_val, num);
            max_val = max(max_val, num);
        }
        
        unordered_set<int> num_set(nums.begin(), nums.end());
        vector<int> missing;
        
        for (int i = min_val; i <= max_val; ++i) {
            if (num_set.find(i) == num_set.end()) {
                missing.push_back(i);
            }
        }
        
        return missing;
    }
};