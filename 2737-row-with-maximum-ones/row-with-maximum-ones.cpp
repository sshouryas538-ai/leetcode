class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int cnt = 0;
        int max1 = 0, ans = 0;
        for(int i=0;i<mat.size();i++){
            cnt = 0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j] == 1) cnt++;
                if(cnt > max1){
                    max1 = cnt;
                    ans = i;
                }
            }
        }
        return {ans,max1};
    }
};