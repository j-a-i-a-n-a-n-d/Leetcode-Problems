class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        long long int x= *max_element(nums.begin(),nums.end());
        cout<<x;
        x = (x <0)?0:x;
        vector<bool> vp(x+1,false);
        
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]>0)vp[nums[i]]=true;
        }
       for (long long int i=1;i<vp.size();i++)
           if (vp[i]==0)return i;
        return vp.size();
    }
};