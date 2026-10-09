class Solution {
public:
    int minInsertions(string s) {
        int need = 0,ans = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                if(need%2)ans++,need--;
                need += 2;
            }
            else if(need == 0) ans++,need = 1;
            else need--;
        }
        return ans+need;
    }
};