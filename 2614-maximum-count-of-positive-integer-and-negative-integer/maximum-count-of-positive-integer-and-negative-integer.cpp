class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int low = 0,high = nums.size()-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid] >= 0) high = mid -1;
            else low = mid + 1;
        }
        int noOfN = low;
        low = 0, high = nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] <= 0) low = mid +1;
            else high = mid -1;
        }
        int noOfP = nums.size()-low;
        return max(noOfN,noOfP);
    }
};