class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Function to calculate maximum profit using single pass

        // Initialize the minimum price to a large number
        int maxi = INT_MIN;

        // Initialize the maximum profit to 0
        int mini = INT_MAX;

        // // Traverse each price in the array
        // for (int price : prices) {
        //     // If current price is less than minPrice, update minPrice
        //     if (price < minPrice) {
        //         minPrice = price;
        //     }
        //     // neg nhi include
        //     else {
        //         maxProfit = max(maxProfit, price - minPrice);
        //     }
        // }

        // // Return the maximum profit found
        // return maxProfit;
 
for(int i=0;i<prices.size();i++){
    mini = min(mini , prices[i]);
    int diff= prices[i]-mini;
    maxi = max(maxi , diff);
}
return maxi;
    }
};