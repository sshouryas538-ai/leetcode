class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it:nums){
            if(mpp[it] >= 2) continue;
            mpp[it]++;
        }
        vector<int>arr;
        for(auto it : mpp) {
            for(int i = 0; i < it.second; i++) {
                arr.push_back(it.first);
            }
        }
        for(int i=0;i<arr.size();i++){
            nums[i] = arr[i];
        }
        return arr.size();
    }
};