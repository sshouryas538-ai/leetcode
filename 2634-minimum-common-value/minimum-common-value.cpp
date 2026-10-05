class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size();i++){
            int low = 0, high = nums2.size()-1;
            while(low <= high){
                int mid = low + (high - low)/2;
                if(nums2[mid] == nums1[i]) return nums2[mid];
                else if(nums2[mid] < nums1[i]) low = mid +1;
                else high = mid -1;
            }
        }
        return -1;
    }
};