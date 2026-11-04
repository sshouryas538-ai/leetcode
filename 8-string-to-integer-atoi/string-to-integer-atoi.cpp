class Solution {
public:
int myAtoi(string s) {
int i = 0, n = s.size();


    // Skip l
    while (i < n && s[i] == ' ') i++;

    if (i == n) return 0;

    // Handle sign
    bool negative = false;

    if (s[i] == '-') {
        negative = true;
        i++;
    }
    else if (s[i] == '+') {
        i++;
    }

    // Build the number as negative
    int ans = 0;

    int limit = negative ? INT_MIN : -INT_MAX;
    int multMin = limit / 10;

    while (i < n && s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        // Check overflow before multiplication
        if (ans < multMin) {
            return negative ? INT_MIN : INT_MAX;
        }

        ans *= 10;

        if (ans < limit + digit) {
            return negative ? INT_MIN : INT_MAX;
        }

        ans -= digit;
        i++;
    }

    return negative ? ans : -ans;
}
};
