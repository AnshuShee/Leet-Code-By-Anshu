class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            if(num %3 !=0){
                count++;
            }
        }
        return count;
    }
};