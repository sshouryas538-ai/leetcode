class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>path;
        vector<vector<int>>ans;
       solve(candidates,0,target,path,ans);
       return ans;
    }
private:
    void solve(vector<int>&candidates,int index,int target,vector<int>&path,vector<vector<int>>&ans){
        if(target == 0){
            ans.push_back(path);
            return;
        }
        if(target<0 || index == candidates.size()){
            return;
        }

        solve(candidates,index+1,target,path,ans);

        path.push_back(candidates[index]);
        solve(candidates,index,target - candidates[index],path,ans);

        path.pop_back();
    }
};