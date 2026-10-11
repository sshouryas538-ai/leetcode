class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            int check = i+1;
            if(n%check == 0) ans += nums[i]*nums[i];
        }
        return ans;
    }
};