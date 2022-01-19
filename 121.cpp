class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int buy=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[buy]>prices[i])
                buy=i;
            if(prices[i]-prices[buy]>max_profit)
            {
                max_profit=prices[i]-prices[buy];
            }
        }   
        return max_profit;
    }
};
