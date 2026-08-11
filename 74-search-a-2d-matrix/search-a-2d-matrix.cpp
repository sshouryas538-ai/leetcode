class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int ll = 0, hh = matrix.size()-1;
        while(ll<=hh){
            int mid1 = ll + (hh - ll)/2;
            if(matrix[mid1][0] <= target && matrix[mid1][n-1] >= target){
                int low  = 0;
                int high = matrix[mid1].size()-1;
                while(low<=high){
                    int mid = low + (high - low)/2;
                    if(matrix[mid1][mid] < target){
                        low = mid +1;
                    }
                    else{
                        high = mid -1;
                    }
                    if(matrix[mid1][mid] == target) return true;
                }
                return false;
            }
            else if(matrix[mid1][0] < target ){
                ll = mid1 + 1;
            }
            else{
                hh = mid1 -1;
            }
        }
        return false;
    }
};