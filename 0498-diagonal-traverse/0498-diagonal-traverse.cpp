class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> ans;

        int i = 0, j = 0;
        int direction = 1;

        while (ans.size() < m * n) {

            ans.push_back(mat[i][j]);

            if (direction == 1) {
                
                if (j == n - 1) {
                    i++;
                    direction = -1;
                }
                else if (i == 0) {
                    j++;
                    direction = -1;
                }
                else {
                    i--;
                    j++;
                }
            }
            else {
          
                if (i == m - 1) {
                    j++;
                    direction = 1;
                }
                else if (j == 0) {
                    i++;
                    direction = 1;
                }
                else {
                    i++;
                    j--;
                }
            }
        }

        return ans;
    }
};