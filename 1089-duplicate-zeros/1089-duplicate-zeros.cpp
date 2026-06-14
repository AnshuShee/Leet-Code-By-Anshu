class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>temp;
        int n = arr.size();
        
        for(int num:arr){
            if(temp.size() >= n) break;
            temp.push_back(num);

            //one (if there is room)
            if(num==0&&temp.size()<n){
                temp.push_back(0);

            }
        }
        arr= temp;
        
        
    }
};