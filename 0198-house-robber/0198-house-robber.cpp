class Solution {
public:
    int rob(vector<int>& nums) {
        int num2 = 0;
        int num1 = 0 ;
        for(int num : nums){
            int current = max(num1, num2+num);
            num2 = num1 ;
            num1 = current ;
        }
        return num1;

        
    }
};