class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int element = 1;
        int left = 0,right = n-1,top=0,bottom=n-1,i=0;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                ans[top][i] = element++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans[i][right]=element++;
            }
            right--;
            for(int i=right;i>=left;i--){
                ans[bottom][i]=element++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                ans[i][left]=element++;
            }
            left++;
        }
        return ans;
    }
};