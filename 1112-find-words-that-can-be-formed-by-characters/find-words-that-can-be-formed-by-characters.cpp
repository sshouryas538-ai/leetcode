class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        int freq[26] = {};
        for(char it:chars) freq[it-'a']++;
        for(string word:words){
            bool check = true;
            int temp [26] = {0};
            for(char it:word){
                temp[it-'a']++;
                if(temp[it-'a'] > freq[it-'a']){
                    check = false;
                    break;
                }
            }
            if(check) ans += word.size();
        }
        return ans;
    }
};