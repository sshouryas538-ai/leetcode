class Solution {
public:
    string reverseWords(string s) {
        int n= s.size(), i =0;
        string ans;
        while(i<n){
            while(i<n && s[i] == ' '){
                i++;
                continue;
            }
            if(i>=n) break;
            string temp;
            while(i<n && s[i] != ' '){
                temp += s[i];
                i++;
            }
            if(!ans.empty()) ans += ' ';
            reverse(temp.begin(),temp.end());
            ans += temp;
        }
        // ans.erase(0,1);
        return ans;
    }
};