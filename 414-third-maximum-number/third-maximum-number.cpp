class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long firstMax =  LLONG_MIN,secondMax=LLONG_MIN,thirdMax = LLONG_MIN;
        for(auto it:nums){
            if(it == firstMax || it == secondMax || it == thirdMax) continue;
            if(it>firstMax){
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = it;
            }else if(it>secondMax){
                thirdMax = secondMax;
                secondMax = it;
            }else if(it>thirdMax) thirdMax = it;
        }
        if(thirdMax == LLONG_MIN)return firstMax;
        else return thirdMax;
    }
};