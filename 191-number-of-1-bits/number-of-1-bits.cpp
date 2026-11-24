class Solution {
public:
    string toBinary(int n) {
        if (n == 0) return "0";

        string ans = "";

        while (n > 0) {
            ans += (n % 2) + '0';
            n /= 2;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
    int hammingWeight(int n) {
        int ans = 0;
        string check = toBinary(n);
        for(int i=0;i<check.size();i++){
            if(check[i] == '1') ans++;
        }
        return ans;
    }
};