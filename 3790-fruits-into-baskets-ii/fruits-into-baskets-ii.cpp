class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();
        int ans = n;
        for(auto it:fruits){
            for(int i=0;i<baskets.size();i++){
                if(baskets[i]>=it){
                    baskets[i] = 0;
                    --ans;
                    break;
                }
            }
        }
        return ans;
    }
};