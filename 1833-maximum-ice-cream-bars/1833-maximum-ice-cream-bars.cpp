class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins)
    {
        int result=0;
        sort(costs.begin(),costs.end());
        int i=0;
        while(coins>0 && i<costs.size())
        {
            if(coins-costs[i]>=0){
               coins-=costs[i];
               result++;
               i++;
            }
            else break;
        }
        return result;
    }
};