class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // optimal version
        int profit=0;
        int n= prices.size();
        int buy=0;
        int sell=1;

        while( sell<n){
            if( prices[sell]>prices[buy]){
                int curr= prices[sell]- prices[buy];
                profit= max(profit,curr);
            }
            else  {buy=sell;
            }
            sell++;
        }
        return profit;
        
    }
};
