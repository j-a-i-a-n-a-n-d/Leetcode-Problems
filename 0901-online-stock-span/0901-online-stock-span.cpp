class StockSpanner
{
    stack<pair<int,int>>stock;
public:
    StockSpanner() {
        stack<pair<int,int>>stock;
    }
    
    int next(int price) 
    {
        int res=1;
        while(!stock.empty() && stock.top().first<=price)
        {
            res+=stock.top().second;
            stock.pop();
        }
        stock.push(make_pair(price,res));
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

// class StockSpanner {
    // vector<int> sol;
// public:
//     
    // StockSpanner() 
    // {
        // vector<int> sol;
    // }
//     
    // int next(int price) 
    // {
        // sol.push_back(price);
        // int ans =1;
        // int n = sol.size();
        // for(int i=n-2;i>-1;i--)
        // {
            // if (sol[i]<=price)
                // ans++;
            // else
                // break;
        // }
        // return ans;
    // }
// };
// 