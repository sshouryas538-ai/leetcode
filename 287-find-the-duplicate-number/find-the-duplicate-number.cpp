class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int check = abs(nums[i]);
            check -= 1;
            if(nums[check] > 0){
                nums[check] *= -1;
            }else{
                return abs(nums[i]);
            }
        }
        return -1;
    }
};