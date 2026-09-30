class Solution {
public:
    bool isPerfectSquare(int nums) {
        int low = 0, high = nums;
        while(low <= high){
            long long mid = low + (high - low)/2;
            if(mid*mid == nums) return true;
            else if(mid*mid < nums) low = mid +1;
            else high = mid - 1;
        }
        return false;
    }
};