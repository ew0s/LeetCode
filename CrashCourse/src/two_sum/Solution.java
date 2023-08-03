package two_sum;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

public class Solution {
    public static int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> diffToIndex = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int diff = target - nums[i];
            if (diffToIndex.containsKey(diff)) {
                return new int[]{i, diffToIndex.get(diff)};
            }

            diffToIndex.put(nums[i], i);
        }

        return new int[]{};
    }
}
