class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
      map<int,int>mpp;
      for(auto it:nums2) mpp[it]++;
      for(auto it:nums1){
        if(mpp[it] > 0){
            ans.push_back(it);
            mpp[it]--;
        }
      }
      return ans;
    }
};