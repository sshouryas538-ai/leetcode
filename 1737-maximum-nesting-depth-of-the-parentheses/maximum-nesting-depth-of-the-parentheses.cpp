class Solution {
public:
    int maxDepth(string s) {
        int ans = 0,temp = 0;
        for(char it:s){
            if(it == '('){
               temp++;
               ans = max(ans,temp);
            }
            else if(it == ')'){
                temp--;
            }
        }
        return ans;
    }
};