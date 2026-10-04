class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        int belowT =0, cnt = 0;
        for(auto it:nums){
            if(it<target) belowT++;
            else if(it == target) cnt++;
        }
        for(int i=0;i<cnt;i++){
            ans.push_back(belowT+i);
        }
        return ans;
    }
};