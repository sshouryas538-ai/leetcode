class Solution {
public:
    int scoreOfParentheses(string s) {
      stack<int>st;
      st.push(0);
      for(int i=0;i<s.size();i++){
        if(s[i] == '(') st.push(0);
        else{
            int check = st.top();
            st.pop();
            int add = 1;
            if(check != 0) add = 2*check;
            st.top() += add; 
        }
      }
      return st.top();
    }
};