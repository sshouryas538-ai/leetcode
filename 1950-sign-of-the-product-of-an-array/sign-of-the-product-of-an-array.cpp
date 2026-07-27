class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long result = 1;
       for(int i=0;i<nums.size();i++){
        if(result > 0) result = 1;
        else if(result < 0) result = -1;
        result *= nums[i];
       }
       if(result > 0) return 1;
       else if(result == 0) return 0;
       else return -1; 
    }
};