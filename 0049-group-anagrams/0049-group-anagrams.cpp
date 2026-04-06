class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;

        for (int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end()); // sort kar diya

            mp[sortedWord].push_back(word); // group me daal diya
        }

        vector<vector<string>> result;

        for (auto it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
};