class Solution {
public:
long long power(long long x, long long y) {
    const long long MOD = 1000000007;
    long long ans = 1;

    while(y > 0) {
        if(y % 2 == 1) {
            ans = (ans*x)%MOD;
        }

        x = (x*x) % MOD;
        y /= 2;
    }

    return ans;
}
    int sumDecoded(vector<long long>& nums) {
        vector<long long> ans;

        for(long long i = 0; i < nums.size(); i++) {
            long long width = nums[i] % 10;
            long long di = nums[i] / 10;

            long long place = 0;
            long long temp = di;

            while(temp > 0) {
                place++;
                temp = temp / 10;
            }

            long long ylen = place - width;
            long long j = 1;

            temp = ylen;

            while(temp > 0) {
                j *= 10;
                temp--;
            }

            long long x = di / j;

            temp = x;

            while(ylen > 0) {
                temp *= 10;
                ylen--;
            }

            long long y = di - temp;

            long long check =power(x,y);

            ans.push_back(check);
        }

        long long correct = 0;

        for(auto it : ans) {
            correct += it;
        }

        long long MOD = 1000000007;

        long long result = correct % MOD;

        return result;
    }
};
