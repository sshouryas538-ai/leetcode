class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        int check = nums[nums.size()/2];
        for(auto it:nums) ans += abs(it-check);
        return ans;
    }
};