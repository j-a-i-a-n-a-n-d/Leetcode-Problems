class Solution 
{
public:
    long long maxKelements(vector<int>& nums, int k)
    {
        priority_queue<int>pq;
        
        for(auto i : nums)pq.push(i);
        long long int ssol=0;
        while(k-- && !pq.empty())
        {
            int t = pq.top();
            pq.pop();
            ssol+=t;
            int s  = ceil(t/3.0);
            pq.push(s);
        }
        return ssol;
    }
};