class Solution {
public:
    bool isAnagram(string s, string t) {
        int f[26] = {0};
        for(char c : s) f[c - 'a']++;
        for(char c :t ) if(-- f[c - 'a'] < 0) 
        return false;
        return s.size() == t.size();
        
    }
};