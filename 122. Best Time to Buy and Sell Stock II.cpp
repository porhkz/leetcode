#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMin = prices[0];
        int currMaxProfit = 0;
        int result = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                if (prices[i] < currMin) {
                    currMin = prices[i];
                } else {
                    currMaxProfit = max(currMaxProfit, prices[i] - currMin);
                    cout << currMaxProfit << endl;
                }
            } else if (prices[i] < prices[i-1]) {
                result += currMaxProfit;
                currMaxProfit = 0;
                currMin = prices[i];
            }
        }

        return result + currMaxProfit;
    }
};

// [7, 1, 5, 6, 6]