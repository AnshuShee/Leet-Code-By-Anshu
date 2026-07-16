class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0, r = 0;
        int maxLen = 0;
        int freq[256] = {0};
        while (r < n) {
            while (freq[s[r]] > 0) {
                freq[s[l]]--;
                l++;
            }
            if (freq[s[r]] == 0) {
                freq[s[r]]++;
            }
            maxLen = max(maxLen, r - l + 1);
            r++;
        }
        return maxLen;
    }
};