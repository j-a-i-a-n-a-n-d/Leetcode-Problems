class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int ones=0;
        int twos=0;
        //bool s=false;
        //sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
                ones=(ones^nums[i])&(~twos);
                twos=(twos^nums[i])&(~ones);
        }
        return ones;
    }
};
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) 
//    {
//        unordered_map<int,int> map1;
//        for(int i=0;i<nums.size();i++){
//            map1[nums[i]]++;
//        }
//        for(auto it : map1)
//        {
//            if (it.second==1)
//                return it.first;
//        }
//        return 0;
//    }
//};