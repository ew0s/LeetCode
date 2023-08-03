package valid_anagram.test;

import org.junit.Assert;
import org.junit.Test;
import valid_anagram.Solution;

public class SolutionTest {

    @Test
    public void isAnagram_WhenAnagramStringsPassed_ThenReturnTrue() {
        boolean actual = Solution.isAnagram("anagram", "nagaram");
        boolean expected = true;

        Assert.assertEquals(expected, actual);
    }

    @Test
    public void isAnagram_WhenNotAnagramStringsPassed_ThenReturnFalse() {
        boolean actual = Solution.isAnagram("rat", "car");
        boolean expected = false;

        Assert.assertEquals(expected, actual);
    }
}
