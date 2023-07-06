class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) 
    {
        int sol=0;
        unordered_map<int,int> mappy;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                mappy[nums1[i]+nums2[j]]++;
            }
        }
        
        for(int i=0;i<nums3.size();i++)
        {
            for(int j=0;j<nums4.size();j++)
            {
                if(mappy.count(-(nums3[i]+nums4[j]))) sol+=mappy[-nums3[i]-nums4[j]];
            }
        }
        return sol;
    }
};