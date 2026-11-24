class Solution {
public:
    string tobinary(uint32_t n) {
        string ans = "";

        for(int i = 0; i < 32; i++) {
            ans += (n % 2) + '0';
            n /= 2;
        }

        return ans;
    }

    uint32_t stobinary(string check) {
        uint32_t ans = 0;

        for(int i = 0; i < 32; i++) {
            ans = ans * 2 + (check[i] - '0');
        }

        return ans;
    }

    uint32_t reverseBits(uint32_t n) {
        string check = tobinary(n);

        return stobinary(check);
    }
};