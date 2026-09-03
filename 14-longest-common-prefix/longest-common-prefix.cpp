class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string check = strs[0];
        string answer = check;
        for(int i=0;i<strs.size();i++){
            int j = 0 ;
            string temp = "";
            while(j<answer.size() && j<strs[i].size()){
                if(strs[i][j] != check[j]) break;
                temp += strs[i][j];
                j++;
            }
            answer = temp;
        }
        return answer;
    }
};