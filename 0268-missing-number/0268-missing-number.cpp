class Solution {
public:
    // int missingNumber(vector<int>& nums) {
    //     int n = nums.size();
    //     for(int i = 0; i<n; i++){
    //       bool flag = false;
    //       for(int ele: nums){
    //          if(ele == i ){
    //             flag = true;
    //             break;
    //          }
    //     }
    //     if(flag==false) return i;



    //       }

    //       return n;
           

            
    // }


    int missingNumber(vector<int>& nums){
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0; i<n ; i++){
            if(i != nums[i]){
                return i ;
            }
           
        }
         return n; // Time complexity - 0(nlogn)
    }
    
};