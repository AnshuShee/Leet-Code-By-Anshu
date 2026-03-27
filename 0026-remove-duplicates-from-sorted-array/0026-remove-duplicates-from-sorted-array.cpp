class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // If the array is empty, there are 0 unique elements.
        if (nums.empty()) return 0;

        // 'i' is the "slow" pointer. It stays at the last unique element found.
        int i = 0;

        // 'j' is the "fast" pointer. It scans the array looking for new values.
        for (int j = 1; j < nums.size(); j++) {
            // If the current element is different from the last unique element...
            if (nums[j] != nums[i]) {
                i++;             // Move the unique pointer forward...
                nums[i] = nums[j]; // ...and overwrite the spot with the new value.
            }
        }

        // The number of unique elements is the index + 1 (since indices start at 0).
        return i + 1;
    }
};