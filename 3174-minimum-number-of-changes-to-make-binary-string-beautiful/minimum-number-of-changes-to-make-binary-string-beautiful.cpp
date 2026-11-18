class Solution {
public:
    int minChanges(string s) {
        int ans = 0;
        int zerono = 0, oneno = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '0'){
                zerono++;
                if(oneno % 2 != 0){
                    ans++;
                    oneno++;
                    zerono--;
                }
            }else{
                oneno++;
                if(zerono % 2 != 0){
                    ans++;
                    zerono++;
                    oneno--;
                }
            }
        }
        return ans;
    }
};