class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;

        for (string s : sentences) {
            int count = 1;

            for (char ch : s) {
                if (ch == ' ')
                    count++;
            }

            maxi = max(maxi, count);
        }

        return maxi;
    }
};