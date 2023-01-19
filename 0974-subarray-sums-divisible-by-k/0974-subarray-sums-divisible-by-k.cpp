class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int n = nums.size();
        for(int i =1;i<n;i++)nums[i]+=nums[i-1];
        
        //keeping count of all the reminders that we encounter
        //1st time it is rem from 2nd time it shows that s1- rem ==0 and hence we must count it
        //:-)
        
        vector<int> helperArray(k,0);
        helperArray[0]=1;
        int sol=0;
        int rem=0;
        for(auto i : nums)
        { 
             rem = i%k;
             rem=i<0?(k+rem)%k:rem;
             // rem = (k+i%k)%k;
             sol = sol+ helperArray[rem];
             helperArray[rem]++;
        }
        return sol;
    }
};
//class Solution {
//public:
//    int subarraysDivByK(vector<int>& nums, int k) 
//    {
//        int n = nums.size();
//        vector<int>prefixSum(n,0);
//        prefixSum[0]=nums[0];
//        for(int i =1;i<n;i++)
//        {
//            prefixSum[i]=prefixSum[i-1]+nums[i];
//        }
//        int count=0;
//
//        for(auto it : prefixSum)if (it%k==0)count++;
//        
//        
//        for(int i=0;i<n;i++)
//        {
//            for(int j=i+1;j<n;j++)
//            {
//                int c =abs(prefixSum[j]-prefixSum[i]);
//                if (c%k==0)count++;
//            }
//        }
//        
//        return count;
//    }
//};