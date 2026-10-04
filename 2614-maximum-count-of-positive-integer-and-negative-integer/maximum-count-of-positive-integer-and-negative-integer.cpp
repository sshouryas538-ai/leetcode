class Solution {
public:

    int binarySearch(vector<int>&nums,int target){
        int low = 0, high = nums.size()-1,ans = nums.size();
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid] < target) low = mid +1;
            else{
                ans = mid;
                high = mid -1;
            }
        }
        return ans;
    }

    int maximumCount(vector<int>& nums) {
        int noOfN = binarySearch(nums,0);
       int noOfP = nums.size() - binarySearch(nums,1);
       return max(noOfN,noOfP);
    }
};