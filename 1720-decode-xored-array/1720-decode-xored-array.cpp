class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) 
    {
        int n = encoded.size();
        vector<int>ans(n+1);
        ans[0]=first;
        for(int i=0;i<encoded.size();i++)
        {
            ans[i+1]=(ans[i])^(encoded[i]);
        } 
        return ans;
    }

};