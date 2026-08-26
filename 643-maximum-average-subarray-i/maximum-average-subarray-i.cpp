class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double avg = 0;
       for(int i=0;i<k;i++){
        avg += nums[i];
       }
       
       int j = k,i=0;
        double check = avg;
       for(int j=k;j<nums.size();j++){
        check += nums[j] - nums[j-k];
        avg = max(check,avg);
       }
       return avg/k;
    }
};