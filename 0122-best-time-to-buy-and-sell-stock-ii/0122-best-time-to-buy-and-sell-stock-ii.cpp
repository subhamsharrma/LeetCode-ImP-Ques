class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profits = 0;

        // Capture every increasing segment as profits.
        for (int i = 1; i < static_cast<int>(prices.size()); ++i) {
            if (prices[i] > prices[i - 1]) {
                profits += prices[i] - prices[i - 1];
            }
        }

        return profits;
    }
};