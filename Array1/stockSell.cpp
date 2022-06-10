class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            profit=max(profit,prices[i]-curr);
            curr=min(prices[i],curr);
        }
        return profit;
    }
};