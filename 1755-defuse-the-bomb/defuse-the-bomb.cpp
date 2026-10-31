class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans(code.size(),0);
        if(k==0) return ans;
        if(k>0){
            for(int i=0;i<ans.size();i++){
                int temp = 0, cnt=0, idx = (i+1)%ans.size();
                while(cnt < k){
                    temp += code[idx];
                    idx = (idx+1)%ans.size();
                    cnt++;
                }
                ans[i] = temp;
            }
            return ans;
        }
        for(int i=ans.size()-1;i>=0;i--){
            int temp = 0, cnt=0, idx = i-1;
            if(idx < 0) idx = ans.size()-1;
            while(cnt < abs(k)){
                temp += code[idx];
                cnt++;
                idx--;
                if(idx<0) idx = ans.size()-1;
            }
            ans[i] = temp;
        }
        return ans;
    }
};