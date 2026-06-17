class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v;
        string temp = "";

        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {

                if (temp == "" || temp == ".") {
                    
                }
                else if (temp == "..") {
                    if (!v.empty()) {
                        v.pop_back();
                    }
                }
                else {
                    v.push_back(temp);
                }

                temp = "";
            }
            else {
                temp += path[i];
            }
        }

        string ans = "";

        for (string s : v) {
            ans += "/" + s;
        }

        if (ans == "")
            return "/";

        return ans;
    }
};