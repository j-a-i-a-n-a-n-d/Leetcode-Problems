//class Solution {
//public:
//    
//    void heapify(vector<int>&nums,int n,int i)                                             
//    {   //building heap
//        int leftChild=2*i+1;
//        int rightChild=2*i+2;
//        int largest=i;
//        if (leftChild  <n && nums[leftChild]>nums[largest])largest=leftChild;
//        if (rightChild <n && nums[rightChild]>nums[largest])largest=rightChild;
//        if(largest !=i)
//        {
//            swap(nums[i],nums[largest]);
//            heapify(nums,n,largest);
//        }
//        
//    }
//    vector<int> sortArray(vector<int>& nums) 
//    {
//        int n = nums.size();
//        for(int i=n/2-1;i>=0;i--)  
//            //1st call to heapify for getting the max element in the heap
//            heapify(nums,n,i);
//        
//        for(int i=n-1;i>0;i--)
//        {   //concurrently reducing the size of the arr and again finding the max element and //swapping it 
//            swap(nums[0],nums[i]);
//            heapify(nums,i,0);
//        }
//        return nums;
//    }
//};
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        stable_sort(nums.begin(), nums.end());
        return nums;
    }};