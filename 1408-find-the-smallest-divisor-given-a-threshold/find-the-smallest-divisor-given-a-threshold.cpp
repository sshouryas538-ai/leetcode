class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<low) low = nums[i];
            if(nums[i]>high) high = nums[i];
        }
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            int check = total(nums,mid);
            if(check<=threshold){
                high = mid -1;
                ans = mid;
            }
            else{
                low = mid +1;
            }
        }
        return ans;
    }
    int total(vector<int>&nums,int mid){
        double totalv = 0;
        for(int i=0;i<nums.size();i++){
            totalv += ceil((double)nums[i]/mid);
        }
        return (int)totalv;
    }
};