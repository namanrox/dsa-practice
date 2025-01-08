class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), initial = prices[0], max = 0;
        for(int i=1; i<n; i++) {
            if(initial < prices[i]) max += prices[i] - initial;
            initial = prices[i];
        }
        return max;
    }
};