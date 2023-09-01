class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int low = m - 1;
        int high = 0;
        
        while(low>=0 && high<n)
        {
            if(nums1[low]>nums2[high])swap(nums1[low--],nums2[high++]);
            else break;
        }
        sort(nums1.begin(),nums1.begin()+m);
        for(auto it : nums1)cout<<it<<" ";
        
        sort(nums2.begin(),nums2.end());
        for(auto it : nums2)cout<<it<<" ";
        int j=0;
        for(int i=m;i<nums1.size();i++)
        {
            nums1[i]=nums2[j];
            j++;
        }
        
    }
};