class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        for(auto& [kk, val] : mpp){
            if(val == 1) return kk;
        }
        return -1;
    }
};