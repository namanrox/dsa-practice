class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, minPrice = INT_MAX, n = prices.size();
        for(int i=0; i<n; i++) {
            minPrice = min(minPrice, prices[i]);
            profit = max(profit, prices[i]-minPrice);
        }
        return profit;
    }
};