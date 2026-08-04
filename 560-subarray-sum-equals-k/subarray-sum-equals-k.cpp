class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0] = 1;
        int total = 0, count = 0;
        for(int i=0;i<nums.size();i++){
            total += nums[i];
            if(mpp.find(total - k) != mpp.end()){
                count += mpp[total-k];
            }
            mpp[total]++;
        }
        return count;
    }
};