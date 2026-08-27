class Solution {
public:
    int jump(vector<int>& nums) {
        int check = 0, ans = 0, n = nums.size(),current = 0;
        if(n == 1 && nums[0] == 0) return ans;
        for(int i=0;i<n-1;i++){
            check = max(check,nums[i]+i);
            if(i == current){
                ans++;
                current = check;
                if(current >= n-1) break;
            }
        }
        return ans;
    }
};