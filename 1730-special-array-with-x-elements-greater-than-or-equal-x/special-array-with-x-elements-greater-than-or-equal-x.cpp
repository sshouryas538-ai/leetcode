class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
            int low = 0, high = nums.size()-1;
            while(low<=high){
                int mid = low + (high - low)/2;
                if(nums[mid] >= i) high = mid -1;
                else low = mid+1;
            }
            int count = nums.size()-low;
            if(count == i) return i;
        }
        return -1;
    }
};