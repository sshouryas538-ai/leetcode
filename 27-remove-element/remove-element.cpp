class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = 0;
        for(auto it:nums){
            if(it != val) ans++;
            else continue;
        }
        int i=0,j=i+1;
        while(i<ans && j<nums.size()){
            if(nums[i] == val && nums[j] != val){
                swap(nums[i],nums[j]);
                i++;
            }
            else if(nums[i] != val) i++;
            j++;
        }
        return ans;
    }
};