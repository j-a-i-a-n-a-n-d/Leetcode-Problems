class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) 
    {
        vector<int> sol(nums.size(),0);
        int k=1,j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0){sol[j]=nums[i];j+=2;}
            else {sol[k]=nums[i];k+=2;}
        }
        return sol;
    }
};