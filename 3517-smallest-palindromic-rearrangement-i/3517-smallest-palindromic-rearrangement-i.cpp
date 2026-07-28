class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> count(26, 0);
        for (char c : s) {
            count[c - 'a']++;
        }
        
        string half = "";
        string middle = "";
        
        for (int i = 0; i < 26; i++) {
            if (count[i] > 0) {
                half.append(count[i] / 2, (char)('a' + i));
                if (count[i] % 2 != 0) {
                    middle = string(1, (char)('a' + i));
                }
            }
        }
        
        string rev_half = half;
        reverse(rev_half.begin(), rev_half.end());
        
        return half + middle + rev_half;
    }
};