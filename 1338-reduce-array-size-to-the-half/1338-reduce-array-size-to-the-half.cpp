class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)mp[arr[i]]++;
        priority_queue<int>pq;
        for(auto it : mp)
            pq.push(it.second);
        int elements=0;
        int sol=0;
        while (elements < arr.size() / 2)
        {
            elements += pq.top();
            pq.pop();
            sol++;
        }
        return sol;
    }
};