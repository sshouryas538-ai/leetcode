class Solution {
public:
    int arrangeCoins(int n) {
       int ans = 0;
       int low = 1, high = n;
       while(low <= high){
        long long mid = low + (high - low)/2;
        long long check = mid*(mid+1)/2;
        if(check <= n){
            low = mid +1;
            ans = mid;
        }else high = mid -1;
       }
       return ans;
    }
};