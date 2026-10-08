class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(char &c : paragraph) {
            if(isalpha(c))
                c = tolower(c);
            else
                c = ' ';
        }
        map<string,int>mpp;
        stringstream ss(paragraph);
        string word;
        while(ss>>word){
            mpp[word]++;
        }
        string ans;
        int maxi = 0;
        for(auto it:mpp){
            if(it.second > maxi && find(banned.begin(),banned.end(),it.first) == banned.end()){
                maxi = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};