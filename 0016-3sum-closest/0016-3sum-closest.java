import java.util.Arrays;

class Solution {
    public int threeSumClosest(int[] nums, int target) 
    {
        int diff = Integer.MAX_VALUE;
        Arrays.sort(nums);
        int sol = 0;
        int l = nums.length;

        for (int i = 0; i < l - 2; i++) {
            int sub_target = target - nums[i];
            int low = i + 1;
            int high = l - 1;

            while (low < high) 
            {
                int sum = nums[low] + nums[high];
                if (Math.abs(sub_target - sum) < diff)
                {
                    diff = Math.abs(sub_target - sum);
                    sol = nums[i] + sum;
                } 
                else if (sum < sub_target)
                {
                    low++;
                } 
                else
                {
                    high--;
                }
            }
        }

        return sol;
    }
}
