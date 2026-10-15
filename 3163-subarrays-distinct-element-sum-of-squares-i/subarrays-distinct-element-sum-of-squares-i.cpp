class Solution {
public:
    int sumCounts(vector<int>& nums) {
        vector<int>check;
        for(int i=0;i<nums.size();i++){
            set<int>show;
            for(int j=i;j<nums.size();j++){
                show.insert(nums[j]); 
                check.push_back(show.size() * show.size());
            }
        }
        int ans = 0;
        for(auto it:check){
            ans += it;
        }
        return ans;
    }
};