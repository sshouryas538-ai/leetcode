class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        vector<int>temp = nums;
        sort(temp.begin(),temp.end());
        set<int>st;
        int k = 0;
        bool check = true;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != temp[i]){
                if(st.find(nums[i]) == st.end()){ 
                    st.insert(nums[i]);
                    if(check){
                        k = nums[i];
                        check = false;
                    }
                }
            }
        }
        for(auto i = st.begin();i != st.end();i++){
            k &= *i;
        }

        return k;   
    }
};