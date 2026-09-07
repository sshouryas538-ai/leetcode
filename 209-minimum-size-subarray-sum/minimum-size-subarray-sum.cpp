class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans =  INT_MAX;
        int j=0,temp = 0;
        for(int i=0;i<nums.size();i++){
            temp += nums[i];
            while(temp >= target){
                ans = min(ans,i-j+1);
                temp -= nums[j];
                j++;
            }
        }
        if(ans == INT_MAX) return 0;
        else return ans;
    }
};