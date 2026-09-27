class Solution {
public:
    string reverseParentheses(string s) {
       string ans;
       stack<string>st;
       for(char it:s){
        if(it == '('){
            st.push(ans);
            ans.clear();
        }
        else if(it == ')'){
            reverse(ans.begin(),ans.end());
            ans = st.top() + ans;
            st.pop();
        }
        else ans += it;
       }
       return ans;
    }
};