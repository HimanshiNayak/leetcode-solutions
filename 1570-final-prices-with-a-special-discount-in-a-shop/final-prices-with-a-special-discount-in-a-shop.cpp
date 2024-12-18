class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        int res;
        for (int i = 0; i < prices.size(); i++) {
            res = prices[i]; // Default price if no discount is found
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] <= prices[i]) {
                    res = prices[i] - prices[j];
                    break;
                }
            }
            ans.push_back(res); // Ensure the result for each element is added
        }
        return ans;
    }
};
