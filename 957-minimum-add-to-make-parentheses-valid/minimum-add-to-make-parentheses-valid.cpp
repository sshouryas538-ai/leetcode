class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int ans = 0;
        for(char it:s){
            if(it == '(') st.push(it);
            else if(it == ')' && !st.empty()) st.pop();
            else if(it == ')') ans++;
        }
        while(!st.empty()){
            ans++;
            st.pop();
        }
        return ans;
    }
};