class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
       unordered_set<int>seen;
       unordered_set<int>special;
       for(int i=0;i<nums.size();i++){
        int x = nums[i];
        if(seen.count(x)){
            if(nums[i-1] != x){
                special.erase(x);
            }
        }else{
            seen.insert(x);
            special.insert(x);
        }
       }
       return special.size();
    }
};