class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            int pp = nums[i]*nums[i];
            arr.push_back(pp);
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};