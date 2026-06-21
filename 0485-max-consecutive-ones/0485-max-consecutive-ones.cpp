class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_consecutive = 0;
        int current_count = 0;

        for(int n : nums){
            if(n==0){
                current_count = 0;
            }
            else {
                current_count++;

                max_consecutive = max(max_consecutive, current_count);
            }
        }

        return max_consecutive;

          
    }
};