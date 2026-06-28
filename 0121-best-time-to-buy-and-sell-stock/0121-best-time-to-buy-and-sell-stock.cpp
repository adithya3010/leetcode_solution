class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,minm=prices[0];
        for(int i=1;i<prices.size();i++){
            int c=prices[i]-minm;
            profit=max(profit,c);
            minm=min(minm,prices[i]);
            }
            return profit;
        }
    
};