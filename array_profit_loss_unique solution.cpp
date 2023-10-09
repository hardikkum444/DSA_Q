#include <vector>

int maxProfit(std::vector<int>& prices) {
    int minPrice = prices[0];  // Initialize the minimum price to the first element
    int maxProfit = 0;        // Initialize the maximum profit to 0

    for (int i = 1; i < prices.size(); ++i) {
        // Update the minimum price if a lower price is encountered
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            // Calculate the profit if we sell on the current day
            int currentProfit = prices[i] - minPrice;
            
            // Update the maximum profit if the current profit is greater
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }
    }

    return maxProfit;
}

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/

//i solves thid question, again by using two for loops
//but for lesser time complexity, this unique method is what is to be used