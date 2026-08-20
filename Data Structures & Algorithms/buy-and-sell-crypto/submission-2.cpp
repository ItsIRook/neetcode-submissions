class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0, profit = 0;
        for(int r=0; r<prices.size(); r++){
            if(prices[l]>prices[r]) l = r;
            profit = max(profit, prices[r]-prices[l]);
        }
        return profit;
    }
};
