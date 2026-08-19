class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
       int low = 0, high = mat[0].size()-1;
       while(low<=high){
        int mid = low + (high - low)/2;
        pair<int,int>big = maxi(mat,mid);
        int left = mid-1>=0 ? mat[big.second][mid-1] : -1;
        int right = mid + 1 < mat[0].size() ? mat[big.second][mid+1] : -1;
        if(mat[big.second][mid] > left && mat[big.second][mid] > right) return {big.second,mid};
        else if(mat[big.second][mid]<left) high = mid - 1;
        else{
            low = mid + 1;
        }
       }
        return {-1,-1};
    }
    pair<int,int> maxi(vector<vector<int>>& mat, int mid){
        int maxi = 0, p = -1;
        for(int i=0;i<mat.size();i++){
            if(mat[i][mid] > maxi) {
                maxi = mat[i][mid];
                p = i;
            }
        }
        return make_pair(maxi,p);
    }
};