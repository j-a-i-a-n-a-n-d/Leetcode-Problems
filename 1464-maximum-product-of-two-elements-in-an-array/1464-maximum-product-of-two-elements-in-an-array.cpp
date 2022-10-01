class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
        priority_queue<int> pq;
        for(auto i : nums)
            pq.push(i);
        int sol=pq.top()-1;
        pq.pop();
        sol=sol*(pq.top()-1);
        return sol;
    }
};