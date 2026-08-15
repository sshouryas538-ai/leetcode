class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int ans = 0;
        while(j>i){
            int wid = j - i;
            int high = min(height[i],height[j]);
            int check = wid*high;
            if(check>ans){
                ans = check;
                if(height[i]>height[j]){
                    j--;
                }
                else{
                    i++;
                }
            }
            else{
                if(height[i]>height[j]){
                    j--;
                }
                else{
                    i++;
                }
            }
        }
        return (int)ans;
    }
};