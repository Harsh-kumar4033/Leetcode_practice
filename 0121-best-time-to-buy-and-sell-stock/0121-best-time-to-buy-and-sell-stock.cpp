class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),mp=0;
        int Min=prices[0];
        for(int i=0;i<n;i++)
        {
            if(prices[i]>Min)
            {
                mp=max(mp,(prices[i]-Min));
            }
            
            Min=min(Min,prices[i]);
        }
        return mp;
    }
};