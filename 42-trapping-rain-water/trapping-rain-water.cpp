class Solution {
public:
    int trap(vector<int>& arr) {
        int i = 0, j = arr.size()-1;
            int leftmax = arr[0], rightmax = arr[j];
            int ans = 0;
        while(i<j){
            if(arr[i]>leftmax) leftmax = arr[i];
            if(arr[j]>rightmax) rightmax = arr[j];
            if(leftmax<=rightmax){
                ans += leftmax - arr[i];
                i++;
            }
            else{
                ans += rightmax - arr[j]; 
                j--;
            }
        }
        return ans;
    }
};