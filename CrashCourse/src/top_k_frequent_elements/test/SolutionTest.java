package top_k_frequent_elements.test;

import org.junit.Assert;
import org.junit.Test;
import top_k_frequent_elements.Solution;

import java.util.Arrays;

public class SolutionTest {
    @Test
    public void topKFrequent_WhenMultipleAnagramsExist_ThenReturnThemGrouped() {
        Solution s = new Solution();
        int[] actual = s.topKFrequent(new int[]{1, 1, 1, 2, 2, 2}, 2);
        int[] expected = new int[]{1, 2};

        Arrays.sort(actual);

        Assert.assertArrayEquals(expected, actual);
    }
}