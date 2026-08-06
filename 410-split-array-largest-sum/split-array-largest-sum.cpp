class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        long long low = 0, high = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>low) low = nums[i];
            high += nums[i];
        }
        long long ans = -1;
        while(low<= high){
            long long mid = low + (high - low)/2;
            if(MaximumArray(nums,mid,k)){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid +1;
            }
        }
        return (int)ans;
    }
    bool MaximumArray(vector<int>&nums,long long mid,int k){
        int cnt = 1;
        long long pages = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>mid) return false;
            if(nums[i] + pages > mid){
                cnt++;
                pages = nums[i];
            }
            else{
                pages += nums[i];
            }
        }
        return cnt<=k;
    }
};