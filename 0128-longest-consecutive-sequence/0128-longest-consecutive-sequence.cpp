class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_set<int>setty;
        for(int i=0;i<n;i++)setty.insert(nums[i]);
        
        int _curr;
        int _longest=0;
        for(auto it : setty)
        {
            if(setty.find(it-1)==setty.end())
            {
                int _no = it;
                _curr = 1;
                
                while(setty.find(_no+1)!=setty.end()){
                    _curr++;
                    _no++;
                }
            }
            _longest = max(_longest,_curr);
        }
        return _longest;
    }
};