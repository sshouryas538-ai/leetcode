class Solution {
public:
    int trailingZeroes(int n) {
      int ans = 0;
      int divi = 5;
      while(n/divi > 0){
        ans += n/divi;
        divi *= 5;
      }
      return ans;
    }
};