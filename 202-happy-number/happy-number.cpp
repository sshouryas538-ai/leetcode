class Solution {
public:
    bool isHappy(int n) {
        for(int i=10;i>=0;i--){
            int check = 0;
            while(n>0){
                int temp = n%10;
                check += temp*temp;
                n /= 10;
            }
            if(check == 1) return true;
            n = check;
        }
        return false;
    }
};