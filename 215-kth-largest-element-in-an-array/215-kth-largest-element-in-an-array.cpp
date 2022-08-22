class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto i : nums)pq.push(i);
        int a=INT_MIN;
        while(k--&&!pq.empty()){a=pq.top();pq.pop();}
        return a;
    }
};