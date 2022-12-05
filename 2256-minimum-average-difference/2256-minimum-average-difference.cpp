//class Solution {
//public:
//    int minimumAverageDifference(vector<int>& nums) 
//    {
//        
//        int n = nums.size();
//        vector<long long int> prefixSum(n);
//        prefixSum[0]=nums[0];
//        for(int i=1;i<n;i++)prefixSum[i]=nums[i]+prefixSum[i-1];
//        
//        for(int i=0;i<n;i++)cout<<prefixSum[i]<<" ";
//        
//        int solIndex=INT_MAX;
//        int averageDifference=INT_MAX;
//        for(int i=0;i<n;i++)
//        {
//            long long int a1 = prefixSum[i]/(i+1);
//            
//            long long int a2 = (prefixSum[n-1]-prefixSum[i]);
//            if (a2!=0)a2=a2/(n-i-1);
//            int avg = abs(a1-a2);
//            int index = i;
//            if (avg <= averageDifference)
//            {
//                if (avg==averageDifference && index < solIndex)
//                {
//                    averageDifference = avg ;
//                    solIndex = index;
//                }
//                else if (avg < averageDifference)
//                {
//                    averageDifference = avg;
//                    solIndex = index;
//                }
//            }
//        }
//        return solIndex;
//    }
//};//




//space optimization in the code without using the preSum array 
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) 
    {
        int n = nums.size();
        long long totalSum = 0;
        for (int num : nums) totalSum += num;
        int mnAvgDiff = INT_MAX, mnAvgDiffIdx = -1;
        long long preSum = 0;
        for (int i = 0; i < n; i++)
        {
            preSum += nums[i];
            long long postSum = totalSum - preSum;
            int preCount = i + 1;
            int postCount = n - preCount;
            int preAvg = preSum / preCount;
            int postAvg = (postCount == 0)? 0 : (postSum / postCount);
            int avgDiff = abs(preAvg - postAvg);
            if (avgDiff < mnAvgDiff)
            {
                mnAvgDiff = avgDiff;
                mnAvgDiffIdx = i;
            }
        }
        return mnAvgDiffIdx;
    }
};