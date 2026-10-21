class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = 0;
        int ans = INT_MIN;
        for(int i=0;i<nums.size();i++){
            current += nums[i];
            if(nums[i]>current){
                current = nums[i];
            }
            ans = max(ans,current);
        }
        return ans;
    }
};