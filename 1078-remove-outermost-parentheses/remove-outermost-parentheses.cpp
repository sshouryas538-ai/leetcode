class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int depth = 0;
        for(char it:s){
            if(it == '('){
                if(depth > 0)ans += it;
                depth++;
            }else{
                depth--;
                if(depth > 0){
                    ans+=it;
                }
            }
        }
        return ans;
    }
};