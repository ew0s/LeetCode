package contains_duplicate.test;

import contains_duplicate.Solution;
import org.junit.Assert;
import org.junit.Test;

public class SolutionTest {

    @Test
    public void containsDuplicate_WhenContainsDuplicates_ThenReturnTrue() {
        boolean actual = Solution.containsDuplicate(new int[]{1, 2, 3, 3, 4, 5});
        boolean expected = true;

        Assert.assertEquals(expected, actual);
    }

    @Test
    public void containsDuplicate_WhenNoDuplicates_ThenReturnFalse() {
        boolean actual = Solution.containsDuplicate(new int[]{1, 2, 3, 4, 5});
        boolean expected = false;

        Assert.assertEquals(expected, actual);
    }
}