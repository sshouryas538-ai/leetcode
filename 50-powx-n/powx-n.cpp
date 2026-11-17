class Solution {
public:
    double myPow(double x, int n) {
        long long temp = abs((long long)n);
        double ans = 1.0;
        while(temp > 0){
            if(temp % 2 == 0){
                x *= x;
                temp /= 2;
            }else{
                ans *= x;
                temp--;
            }
        }
        if(n < 0) ans = 1.0/ans;
        return ans;
    }
};