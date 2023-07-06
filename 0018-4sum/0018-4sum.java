class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        List<List<Integer>> sol = new ArrayList<>();
        Arrays.sort(nums);
        int len = nums.length;

        for (int i = 0; i < len - 3; i++) {
            long sub_target = target - nums[i]; // b+c+d

            for (int j = i + 1; j < len - 2; j++) {
                long sub_sub_target = sub_target - nums[j]; // c+d
                int low = j + 1;
                int high = len - 1;

                while (low < high) {
                    int sum = nums[low] + nums[high]; // c+d

                    if (sub_sub_target == sum) { // c+d == target - (a+b)
                        sol.add(Arrays.asList(nums[i], nums[j], nums[low], nums[high]));
                        while (low < high && nums[low] == nums[low + 1]) low++;
                        while (low < high && nums[high] == nums[high - 1]) high--;
                        low++;
                        high--;
                    } else if (sum < sub_sub_target) {
                        low++;
                    } else {
                        high--;
                    }
                }

                while (j + 1 < len && nums[j] == nums[j + 1]) j++;
            }

            while (i + 1 < len && nums[i] == nums[i + 1]) i++; // num 1 duplicates removed
        }

        return sol;
    }
}
