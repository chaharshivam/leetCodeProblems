class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minleft = INT_MAX;
        int profit = 0;
        for(int i =0; i<prices.size(); i++){
            minleft = min(minleft, prices[i]);
            profit = max(profit, prices[i]-minleft);
        }
        return profit;
    }
};