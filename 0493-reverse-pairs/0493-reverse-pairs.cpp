class Solution {
public:
    void merge(int low,int mid,int high,vector<int> &nums)
    {
        int right = mid+1;
        vector<int>temp;
        int left = low;
        
        while(low<=mid && right<=high)
        {
            if(nums[low]<=nums[right])temp.push_back(nums[low++]);
            else temp.push_back(nums[right++]);
        }
        while(low<=mid)temp.push_back(nums[low++]);
        while(right<=high)temp.push_back(nums[right++]);
        
        for(int i=0;i<temp.size();i++)
        {
            nums[left+i]=temp[i];
        }
        
    }
    int countt(vector<int>&nums,int low,int mid,int high)
    {
        int right = mid+1;
        int count=0;
        for(int i=low;i<=mid;i++)
        {
            while(right<=high && nums[i]>2*long(nums[right]))right++;
            count+=(right-(mid+1));
        }
        return count;
    }
    int mergeSort (int low,int high,vector<int>&nums)
    {
        int count=0;
        if(low<high)
        {
            int mid = low + (high-low)/2;
            count+=mergeSort(low,mid,nums);
            count+=mergeSort(mid+1,high,nums);
            count+=countt(nums,low,mid,high);
            merge(low,mid,high,nums);
        }
        return count;
    }
    int reversePairs(vector<int>& nums) 
    {
        return mergeSort(0,nums.size()-1,nums);
    }
};