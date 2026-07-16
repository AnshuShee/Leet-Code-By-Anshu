class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        // Maps 'a' through 'z' to row 0, 1, or 2
        string rows = "12210111011122000010020202"; 
        string map = "12210111011122000010020202"; 
        
        // Actually, the simplest way to fix your logic is to use the specific rows:
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        
        vector<string> res;
        for (const string& w : words) {
            int r = 0;
            if (row1.find(tolower(w[0])) != string::npos) r = 1;
            else if (row2.find(tolower(w[0])) != string::npos) r = 2;
            else r = 3;
            
            bool ok = true;
            for (char c : w) {
                int currRow = 0;
                if (row1.find(tolower(c)) != string::npos) currRow = 1;
                else if (row2.find(tolower(c)) != string::npos) currRow = 2;
                else currRow = 3;
                
                if (currRow != r) {
                    ok = false;
                    break;
                }
            }
            if (ok) res.push_back(w);
        }
        return res;
    }
};