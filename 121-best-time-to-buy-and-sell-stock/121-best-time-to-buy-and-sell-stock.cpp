class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int minimum = INT_MAX;
        int result =0;
        for(int i=0;i<prices.size();i++)
        {
            minimum=min(prices[i],minimum);
            result=max(prices[i]-minimum,result);
        }
        return result;
    }
};