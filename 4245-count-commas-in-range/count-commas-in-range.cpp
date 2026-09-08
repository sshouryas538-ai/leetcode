class Solution {
public:
    int countCommas(int n) {
        int ans = 0,temp = n;
        if(n<1000) return 0;
        while(temp>=1000){
            temp /= 1000;
            ans++;
        }
        int ans1 = 1000*ans;
        ans = n-ans1+1;
        return ans;
    }
};