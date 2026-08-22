class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>path;
        vector<vector<int>>ans;
        solve(candidates,0,target,path,ans);
        return ans;
    }

private:
    void solve(vector<int>&candidates,int index,int target,vector<int>path,vector<vector<int>>&ans){
        sort(candidates.begin(),candidates.end());
        if(target == 0) {
            ans.push_back(path);
            return;
        }

        if(target<0 || index == candidates.size()) return;

        for (int i = index; i < candidates.size(); i++) {
            if (candidates[i] > target) break;          // (a)
            if (i > index && candidates[i] == candidates[i-1]) continue;   // (b)
            path.push_back(candidates[i]);
            solve(candidates, i + 1, target - candidates[i], path, ans);
            path.pop_back();
        }
    }
};