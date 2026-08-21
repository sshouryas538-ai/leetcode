class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long mid = num/3;
        long long first = mid - 1;
        long long last = mid + 1;
        if(first + mid + last == num) return {first, mid , last};
        else return {};
    }
};