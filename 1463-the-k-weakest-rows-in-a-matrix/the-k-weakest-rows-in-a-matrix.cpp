class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>ans;
        int row = mat.size()-1, col = mat[0].size()-1;
        for(int i=0;i<=row;i++){
            int low = 0, high = col;
            int num = -1;
            while(low<=high){
                int mid = low + (high - low)/2;
                if(mat[i][mid] == 1){
                    num = mid+1;
                    low = mid +1;
                }else high = mid -1;
            }
            ans.push_back({num,i});
        }
        sort(ans.begin(),ans.end());
        vector<int>uttar;
        for(int i=0;i<k;i++){
            uttar.push_back(ans[i].second);
        }
        return uttar;
    }
};