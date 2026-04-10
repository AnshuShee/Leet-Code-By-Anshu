class Solution {
public:
    string reverseWords(string s){
        vector<string> store;
        string word = "";
        
        for (int i = 0; i < s.length(); i++){
            if (s[i] != ' '){
                word += s[i];
            } else {
                if (word != ""){
                    store.push_back(word);
                    word = "";
                }
            }
        }
        if (word != "") store.push_back(word);
        reverse(store.begin(), store.end());
        string ans = "";
        for (int i = 0; i < store.size(); i++){
            ans += store[i];
            if (i != store.size() - 1) ans += " ";
        }
        return ans;
    }
};