class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>st;
        st.insert(nums.begin(),nums.end());
        int ans = 1;
        for(auto it:st){
            if(st.find(ans) != st.end()) ans++;
            else return ans;
        }
        return ans;
    }
};