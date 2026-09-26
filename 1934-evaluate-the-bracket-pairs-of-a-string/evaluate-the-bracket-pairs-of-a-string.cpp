class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string,string>mpp;
        for(int i=0;i<knowledge.size();i++){
            mpp[knowledge[i][0]] = knowledge[i][1];
        }
        int i=0;
        string key = "";
        while(i<s.size()){
            if(s[i] == '('){
                int start = i;
                i++;
                key = "";
                while(s[i] != ')'){
                    key += s[i];
                    i++;
                }
                string val = mpp[key];
                if(val == "") val="?";
                s.replace(start,i-start+1,val);
                i = start + val.size();
            }
            else i++;
        }
        return s;
    }
};