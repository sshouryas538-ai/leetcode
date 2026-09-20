class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i=0;i<s.size();i++){
            int temp = 'z'-s[i]+1;
            int cl = temp*(i+1);
            ans += cl;
        }
        return ans;
    }
};