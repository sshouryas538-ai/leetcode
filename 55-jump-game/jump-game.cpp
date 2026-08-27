class Solution {
public:
    bool canJump(vector<int>& nums) {
        int check = 0, n = nums.size(),current = 0;
        if(n == 1) return true;
        for(int i=0;i<n-1;i++){
            check = max(check, nums[i]+i);
            if(i == current){
                current = check;
                if(current >= n-1) return true;
            }
        }
        return false;
    }
};