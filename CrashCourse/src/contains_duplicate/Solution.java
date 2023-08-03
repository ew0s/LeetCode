package contains_duplicate;

import java.util.Arrays;

public class Solution {
    public static boolean containsDuplicate(int[] nums) {
        if (nums.length <= 1) {
            return false;
        }

        Arrays.sort(nums);

        int i = 0;
        int j = 1;
        while (j < nums.length) {
            if (nums[i] == nums[j]) {
                return true;
            }

            i++;
            j++;
        }

        return false;
    }
}
