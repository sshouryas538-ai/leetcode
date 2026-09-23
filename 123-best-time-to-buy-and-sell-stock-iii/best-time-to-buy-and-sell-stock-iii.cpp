	class Solution {
	public:
	    int maxProfit(vector<int>& prices) {
	        int first_buy = INT_MAX, first_profit = 0;
	        int second_buy = INT_MAX, second_profit = 0;
	        for (int price : prices) {
	            first_buy = min(first_buy, price);
	            first_profit = max(first_profit, price - first_buy);
	            second_buy = min(second_buy, price - first_profit);
	            second_profit = max(second_profit, price - second_buy);
	        }
	        return second_profit;
	    }
	};