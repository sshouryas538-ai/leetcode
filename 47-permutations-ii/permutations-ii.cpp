class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector<bool>check(n,false);    
        vector<int>current;
        set<vector<int>>result;
        backtracking(nums,check,current,result);
        vector<vector<int>>ans(result.begin(),result.end());
        return ans;
    }

    void backtracking(vector<int>&nums,vector<bool>&check,vector<int>&current,set<vector<int>>&result){
        if(current.size() == nums.size()){
            result.insert(current);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(check[i]) continue;

            current.push_back(nums[i]);
            check[i] = true;
            backtracking(nums,check,current,result);
            current.pop_back();
            check[i] = false;
        }
    }
};