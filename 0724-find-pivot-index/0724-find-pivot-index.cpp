class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> ps(n,0); 
        ps[0]=nums[0];
        for(int i =1;i<n;i++)ps[i]=ps[i-1]+nums[i];
        for(auto i : ps )cout<<i<<" ";
        
        int result =-1;
        ps.insert(ps.begin(),0);
        int ppp = ps.size();
        for(int i =1;i<ppp;i++)
        {
            if (ps[i-1]==ps[ppp-1]-ps[i])return i-1;
        }
        return -1;
        
    }
};