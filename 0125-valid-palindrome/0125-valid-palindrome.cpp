class Solution {
public:
    bool isPalindrome(string s) {
        for (int left = 0, right = s.length() - 1; left < right; ) {
            
            if (!isalnum(s[left])) {
                left++;
            } 
            else if (!isalnum(s[right])) {
                right--;
            } 
            else {
                if (tolower(s[left]) != tolower(s[right])) {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
    }
};