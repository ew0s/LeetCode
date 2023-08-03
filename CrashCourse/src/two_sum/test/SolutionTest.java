package two_sum.test;

import org.junit.Assert;
import org.junit.Test;
import two_sum.Solution;

import java.util.Arrays;

public class SolutionTest {
    @Test
    public void twoSum_WhenContains_ThenReturnArrayWithIndexes() {
        int[] actual = Solution.twoSum(new int[]{4, 3, 2, 1}, 6);
        int[] expected = new int[]{0, 2};

        Arrays.sort(actual);
        Arrays.sort(expected);

        Assert.assertArrayEquals(expected, actual);
    }
}
