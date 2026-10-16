class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for(auto it:nums) total += it;
        int temp = 0;
        for(int i=0;i<nums.size();i++){
            temp += nums[i];
            total -= nums[i];
            if(temp - nums[i] == total) return i;
        }
        return -1;
    }
};