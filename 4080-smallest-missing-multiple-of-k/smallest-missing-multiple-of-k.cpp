class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        bool ans = true;
        int check = k;
        while(ans){
            if(mpp.find(check) != mpp.end()){
                check += k;
            }
            else{
                ans = false;
            }
        }
        return check;
    }
};