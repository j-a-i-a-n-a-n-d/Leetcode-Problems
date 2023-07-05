class Solution {
    public int[] twoSum(int[] nums, int target) 
    {
        Map<Integer,Integer> mappy = new HashMap<>();
        int l = nums.length;
        for(int i =0;i<l;i++)
        {
           int c = target - nums[i];
            if (mappy.containsKey(c))
            {
                int[] sol = new int[2];
                sol[0] =  mappy.get(c);
                sol[1] = i;
                return sol;
            }
            mappy.put(nums[i],i);
        }
        return null;
    }
}