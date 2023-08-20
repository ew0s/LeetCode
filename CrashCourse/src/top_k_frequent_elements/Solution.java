package top_k_frequent_elements;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> frequency = new HashMap<>();
        for (int num : nums) {
            frequency.merge(num, 1, Integer::sum);
        }
        List<Integer>[] bucket = new ArrayList[nums.length + 1];

        for (int key : frequency.keySet()) {
            int freq = frequency.get(key);
            if (bucket[freq] == null) {
                bucket[freq] = new ArrayList<>();
            }
            bucket[freq].add(key);
        }

        int idx = 0;
        int[] result = new int[k];
        for (int i = nums.length - 1; i >= 0; i--) {
            if (bucket[i] != null) {
                for (int val : bucket[i]) {
                    result[idx++] = val;
                    if (idx == k) {
                        return result;
                    }
                }
            }
        }

        return result;
    }
}
