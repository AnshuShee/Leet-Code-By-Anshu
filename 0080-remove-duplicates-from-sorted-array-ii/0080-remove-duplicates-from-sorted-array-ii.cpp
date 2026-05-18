class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 2;

        // If array size is <= 2, all elements are allowed
        if (nums.size() <= 2)
            return nums.size();

        for (int i = 2; i < nums.size(); i++) {
            // Compare with element at k-2
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};