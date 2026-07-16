class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());

        int left = 0, right = nums.size() - 1;

        while (left < nums.size() && nums[left] == temp[left])
            left++;

        while (right > left && nums[right] == temp[right])
            right--;

        return (left == nums.size()) ? 0 : right - left + 1;
    }
};
