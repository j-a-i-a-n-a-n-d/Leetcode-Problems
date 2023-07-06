class Solution {
    public int fourSumCount(int[] nums1, int[] nums2, int[] nums3, int[] nums4) {
        int sol = 0;
        Map<Integer, Integer> mappy = new HashMap<>();

        for (int i = 0; i < nums1.length; i++) {
            for (int j = 0; j < nums2.length; j++) {
                int sum = nums1[i] + nums2[j];
                mappy.put(sum, mappy.getOrDefault(sum, 0) + 1);
            }
        }

        for (int i = 0; i < nums3.length; i++) {
            for (int j = 0; j < nums4.length; j++) {
                int target = -(nums3[i] + nums4[j]);
                if (mappy.containsKey(target)) {
                    sol += mappy.get(target);
                }
            }
        }

        return sol;
    }
}
