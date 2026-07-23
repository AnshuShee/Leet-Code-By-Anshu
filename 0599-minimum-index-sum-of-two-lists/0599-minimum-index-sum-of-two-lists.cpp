using namespace std;
class Solution {
public:
#include <vector>
#include <string>
#include <unordered_map>
#include <climits>

vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    unordered_map<string, int> indexMap;
    vector<string> result;
    for (int i = 0; i < list1.size(); ++i) {
        indexMap[list1[i]] = i;
    }

    int minSum = INT_MAX;

    for (int i = 0; i < list2.size(); ++i) {
        string restaurant = list2[i];
        if (indexMap.find(restaurant) != indexMap.end()) {
            int sum = indexMap[restaurant] + i;
            if (sum < minSum) {
                minSum = sum;
                result.clear();
                result.push_back(restaurant);
            } else if (sum == minSum) {
                result.push_back(restaurant);
            }
        }
    }
    return result;
}
};