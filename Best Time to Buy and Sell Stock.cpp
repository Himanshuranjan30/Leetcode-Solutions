class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MIN,sell=INT_MIN;
        reverse(prices.begin(),prices.end());
        if(is_sorted(prices.begin(),prices.end()))
            return 0;
        else
            reverse(prices.begin(),prices.end());
        
        for(int i=0;i<prices.size()-1;i++)
        {
            
            buy=max(0-prices[i],buy);
            sell=max(buy+prices[i+1],sell);
        }
        return sell;
    }
};
