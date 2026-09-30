class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>temp;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i] == nums2[j]) temp.insert(nums1[i]); 
            }
        }
        vector<int>ans;
        for(auto it:temp) ans.push_back(it);
        return ans;
    }
};