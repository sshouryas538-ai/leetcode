	class Solution {
	public:
	    int maxProfit(vector<int>& prices) {
	       int first_Buy = INT_MAX, first_Profit = 0;
           int second_Buy = INT_MAX, second_Profit = 0;
           for(int i=0;i<prices.size();i++){
            first_Buy = min(first_Buy,prices[i]);
            first_Profit = max(first_Profit,prices[i]-first_Buy);
            second_Buy = min(second_Buy,prices[i]-first_Profit);
            second_Profit = max(second_Profit,prices[i]-second_Buy);
           }
           return second_Profit;
	    }
	};