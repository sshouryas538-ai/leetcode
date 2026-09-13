class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>check;
        for(auto it:nums){
            check.push_back(to_string(it));
        }
        for(int i=0;i<check.size();i++){
            for(int j=i+1;j<check.size();j++){
                if(check[i]+check[j] >= check[j]+check[i]){
                    continue;
                }else{
                    swap(check[i],check[j]);
                }
            }
        }
        string ans = "";
        for(auto it:check) ans += it;
        if(ans[0] == '0') return "0";
        return ans;
    }
};