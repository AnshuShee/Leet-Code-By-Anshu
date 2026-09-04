class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map<int,int>box;
    vector<int>result;
    for(int i=0;i<nums.size(); i++){
        int a = nums[i];
        int b = target - a;
        if(box.find(b) != box.end()){
            return {box[b],i};

        }
        box[nums[i]] = i;
       

        
    }
    return {};
    }
};