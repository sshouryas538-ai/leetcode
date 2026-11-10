class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        int ans = 0;
        vector<int>dpp(costs.size()+1,0);
        for(int i=1;i<dpp.size();i++){
           int temp1 = INT_MAX, temp2 = INT_MAX, temp3 = INT_MAX;
           if(i-1 >=0) temp1 = dpp[i-1] + costs[i-1] + (1);
           if(i-2>=0) temp2 = dpp[i-2] + costs[i-1] + 2*2;
           if(i-3 >= 0) temp3 = dpp[i-3] + costs[i-1] + 3*3;
           int check = min({temp1, temp2, temp3});
           dpp[i] = check;
        }
        return dpp[costs.size()];
    }
};