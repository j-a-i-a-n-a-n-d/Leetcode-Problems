class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int majorityElement = nums[0];
        int count = 1;
        
        for(auto i : nums)
        {
            if (i==majorityElement)
                count++;
            else
                count--;
            if (count==0)
            {
                majorityElement = i;
                count =1;
            }
        }
        
        //assuming that majority always exist 
        //else check the case that the count> n/2 but that does not gurantee that the count of Majele = count
        //known as Moore's Voting algorithm
        return majorityElement;
    }
};