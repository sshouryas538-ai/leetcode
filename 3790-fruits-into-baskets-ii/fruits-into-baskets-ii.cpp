class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans = 0;
        for(int i=0;i<fruits.size();i++){
            int unset = 1;
            for(int j=0;j<baskets.size();j++){
                if(fruits[i] <= baskets[j]){
                    baskets[j] *= -1;
                    unset = 0;
                    break;
                }
            }
            ans += unset;
        }
        
        return ans;
    }
};