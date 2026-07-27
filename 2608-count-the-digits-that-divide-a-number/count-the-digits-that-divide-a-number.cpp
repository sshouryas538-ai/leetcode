class Solution {
public:
    int countDigits(int num) {
        int result = 0;
        int num1 = num;
        while(num1>0){
            if(num%(num1%10) == 0) result++;
            num1 /= 10;
        }
        return result;
    }
};