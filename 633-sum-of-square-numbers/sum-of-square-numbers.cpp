class Solution {
public:
    bool judgeSquareSum(int c) {
        long long fist = 0, last = sqrt(c);
        while(fist<=last){
            long long total = fist*fist + last*last;
            if(total==c) return true;
            else if(total <c) fist++;
            else last--; 
        }
        return false;
    }
};