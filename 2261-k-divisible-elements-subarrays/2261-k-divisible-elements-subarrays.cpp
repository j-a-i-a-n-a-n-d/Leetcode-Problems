class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) 
    {
        set<vector<int>> setty;
        int count;
        int n = nums.size();
        for(int i=0;i<n;i++){
            count=0;
            vector<int>tempy;
            for(int j=i;j<n;j++){
                tempy.push_back(nums[j]);   
                count = nums[j]%p!=0?count:count+1;
                if (count>k)break;
                setty.insert(tempy);  
            }
        }
        return setty.size();
    }
};