class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX, maxi = INT_MIN;
        int miniInd = 0, maxiInd = 0, n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i] > maxi) {
                maxi = nums[i];
                maxiInd = i;
            }
            if(nums[i]<mini){
                mini = nums[i];
                miniInd = i;
            } 
        }
        int ans = 0, check1 = 0, check2 = 0, check3 = 0;
        check1 = max(maxiInd,miniInd) +1 ;
        check2 = n - min(maxiInd, miniInd);
        check3 = min(miniInd,maxiInd) + 1 +  n - max(miniInd,maxiInd);
        ans = min({check1,check2,check3});
        return ans;
    }
};