class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            string temp(1,s[i]);
            int n = ans.size();
            int f = i-1, b = i+1;
            while(f>=0 && b<s.size()){
                if(s[f] != s[b]) break;
                temp.insert(0,1,s[f]);
                temp.push_back(s[b]);
                f--;
                b++;
            } 
            if(temp.size() > n) ans = temp;

            if(i+1<s.size()){
                string temp2 = "";
                temp2.push_back(s[i]);
                temp2.push_back(s[i+1]);
                f= i-1;
                b=i+2;
                if(s[i] == s[i+1]){
                    while(f>=0 && b<s.size()){
                        if(s[f] != s[b]) break;
                        temp2.insert(0,1,s[f]);
                        temp2.push_back(s[b]);
                        f--;
                        b++;
                    }
                    if(temp2.size()>ans.size()) ans = temp2;
                }
            }
        }
        return ans;
    }
};