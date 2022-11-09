class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> temp;
        int i =0;
        int j =0;
        while (i<n && j < m)
        {
            if (nums1[i]<nums2[j])
                temp.push_back(nums1[i++]);
            else
                temp.push_back(nums2[j++]);
        }
        while (i<n)
            temp.push_back(nums1[i++]);
        while (j < m)
            temp.push_back(nums2[j++]);
        for(int i =0;i< temp.size();i++)
        {
            cout<<temp[i]<< " ";
        }
        if (temp.size()%2!=0)
            return temp[temp.size()/2];
        else
        {
            int b = temp[temp.size()/2];
            int a = temp[(temp.size()/2)-1];
            return a + (b-a)/2.0;
        }
            

    }
};
//approach 2 ====> maintain 2 queues one with the smaller half and one with the greater half 
//then the median would either be the element in the queue with larger size or the last and first element from //each queue in the case of a resulting array of even elements 
