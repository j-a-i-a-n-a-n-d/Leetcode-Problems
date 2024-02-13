class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        bool flag = false;
        
        int end = n;
        int i=0;
        while(i<end)
        {
            if(nums[i]==0)
            {
                int j=i;
                while(j<end-1){
                    swap(nums[j],nums[j+1]);
                    j++;
                } 
                end--;
            }
            else{
                i++;
            }
            
        }
        
    }
};