class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        // Step 1: Count frequency
        for (int value : arr) {
            freq[value]++;
        }

        // Step 2: Check uniqueness
        unordered_set<int> seen;

        for (auto &p : freq) {
            if (seen.count(p.second)) {
                return false; // duplicate frequency found
            }
            seen.insert(p.second);
        }

        return true;
    }
};