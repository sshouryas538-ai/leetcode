class Solution {
public:
    string removeStars(string s) {
        string ans;
        for(char it:s){
            if(it == '*') ans.pop_back();
            else ans.push_back(it);
        }
        return ans;
    }
};