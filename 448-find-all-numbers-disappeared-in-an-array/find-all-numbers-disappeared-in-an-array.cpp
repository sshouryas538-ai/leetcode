class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        set<int>check;
        for(auto it:nums) check.insert(it); 
        int n = nums.size();
        for(int i=1;i<=n;i++){
            if(check.find(i) != check.end()) continue;
            else ans.push_back(i);
        }
        return ans;
    }
};