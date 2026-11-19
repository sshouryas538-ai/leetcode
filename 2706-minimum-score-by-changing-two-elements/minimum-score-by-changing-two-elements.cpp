class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        if(nums.size() <= 3) return 0;
        sort(nums.begin(),nums.end());
        int check = nums[n-1] - nums[2];
        int check1 = nums[n-3] - nums[0];
        int check2 = nums[n-2] - nums[1];
        return min({check,check1,check2}); 
    }
};