class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it:nums) mpp[it]++;
        int cnt = 0;
        for(auto it:mpp){
            int temp = it.second;
            cnt += (temp*(temp-1))/2;
        }
        return cnt;
    }
};