#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::vector<std::string> findRelativeRanks(std::vector<int>& score) {
        int n = score.size();
        std::vector<std::pair<int, int>> athletes(n);
        
        for (int i = 0; i < n; ++i) {
            athletes[i] = {score[i], i};
        }
        
        std::sort(athletes.rbegin(), athletes.rend());
        
        std::vector<std::string> answer(n);
        
        for (int i = 0; i < n; ++i) {
            int original_index = athletes[i].second;
            if (i == 0) {
                answer[original_index] = "Gold Medal";
            } else if (i == 1) {
                answer[original_index] = "Silver Medal";
            } else if (i == 2) {
                answer[original_index] = "Bronze Medal";
            } else {
                answer[original_index] = std::to_string(i + 1);
            }
        }
        
        return answer;
    }
};