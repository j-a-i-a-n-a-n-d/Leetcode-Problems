class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) 
    {
        int minSum=0;
        int total_sum=0;
        int mini=INT_MAX;
        
        int maxi=INT_MIN;
        int maxSum=0;
        for(auto it : nums)
        {
            
            maxSum+=it;
            minSum+=it;
            total_sum+=it;
            
            maxi=max(maxSum,maxi);
            mini=min(minSum,mini);
            
            if(maxSum<0)maxSum=0;
            if (minSum>0)minSum=0;
        }
        
        cout<<mini<<" "<<maxi<<endl;
        return maxi>total_sum-mini?maxi:(total_sum-mini==0?maxi:total_sum-mini);
    }
};

//5 -3 5 5 -3 5
//
//10
//5 -13 5 5 -3