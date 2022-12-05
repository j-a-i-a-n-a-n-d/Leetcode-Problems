#define ll long long
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) 
    {
        int n = nums.size();
        vector<ll int>ps(nums.size());
        vector<ll int>ss(nums.size());
        
        ps[0]=nums[0];
        for(int i =1;i<n;i++)ps[i]=nums[i]+ps[i-1];
        
        ss[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)ss[i]=nums[i]+ss[i+1];
        
        //for(int i =0;i<n;i++)cout<<ps[i]<<" ";
        //cout<<endl;
        //for(int i=0;i<n;i++)cout<<ss[i]<<" ";
        
        int sol=0;
        
        for(int i=0;i<n-1;i++)if (ps[i]>=ss[i+1])sol++;
        return sol;
    }
};