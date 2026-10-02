class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    set<int>mpp;
    for(int i=0;i<nums.size();i++){
        if(mpp.find(nums[i]) != mpp.end()) return true;
        mpp.insert(nums[i]);
        if(i>=k){
            mpp.erase(nums[i-k]);
        }
    }
    return false;    
    }
};