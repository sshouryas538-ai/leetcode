class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int p = 0, q = 0, maxi = 0;
        for(int i=0;i<mat.size();i++){
            for(int j = 0;j<mat[0].size();j++){
                if(mat[i][j]>maxi){
                    maxi = mat[i][j];
                    p = i;
                    q = j;
                }
            }
        }
        vector<int>ans;
        ans.push_back(p);
        ans.push_back(q);
        return ans;
    }
};