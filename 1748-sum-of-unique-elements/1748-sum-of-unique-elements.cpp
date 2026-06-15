class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_set<int> unique, duplicate;

        for (int num : nums) {
            if (duplicate.count(num))
                continue;

            if (unique.count(num)) {
                unique.erase(num);
                duplicate.insert(num);
            } else {
                unique.insert(num);
            }
        }

        int sum = 0;
        for (int num : unique) {
            sum += num;
        }

        return sum;
    }
};