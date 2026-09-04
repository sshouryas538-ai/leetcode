class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans = -1;
        int n = nums.size();
        vector<int>mini(n);
        int smallest = INT_MAX, j = n-1;
        for(int i = n-1;i>=0;i--){
            smallest = min(smallest,nums[i]);
            mini[j] = smallest;
            j--;
        }
        int largest = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            largest = max(largest,nums[i]);
            int check = largest - mini[i];
            if(check <= k){
                return i;
            }
        }
        return ans;
    }
};