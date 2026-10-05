class Solution {
public:
    int scoreOfParentheses(string s) {
      int d = 0,ans=0;
      for(int i=0;i<s.size();i++){
        int check = 0;
        if(s[i] == '(') d++;
        else if(s[i-1]=='('){
            ans += pow(2,d-1);
            d--;
        }else d--;
      }
      return ans;
    }
};