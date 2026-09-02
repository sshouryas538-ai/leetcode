    class Solution {
    public:
        bool uniformArray(vector<int>& nums1) {
            int evencount = 0, oddcount = 0, seven = INT_MAX, sodd = INT_MAX;
            for(auto it:nums1){
                if(it%2==0){
                    evencount++;
                    seven = min(seven,it);
                }
                else{
                    oddcount++;
                    sodd = min(sodd,it);
                }
            }
            bool evenpossible = (oddcount==0);
            bool oddpossible = (evencount == 0) || (sodd<seven);
            return evenpossible||oddpossible;
        }
    };