class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
       unordered_set<int>st;
       st.insert(nums.begin(),nums.end());
       bool loo = true;
       int check = k;
       while(loo){
        if(st.count(check)){
            check += k;
        }
        else{
            loo = false;
        }
       }
       return check;
    }
};