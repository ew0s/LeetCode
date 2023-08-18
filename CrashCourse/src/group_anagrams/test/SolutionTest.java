package group_anagrams.test;

import group_anagrams.Solution;
import org.junit.Assert;
import org.junit.Test;

import java.util.ArrayList;
import java.util.List;

public class SolutionTest {
    @Test
    public void groupAnagrams_WhenMultipleAnagramsExist_ThenReturnThemGrouped() {
        List<List<String>> actual = Solution.groupAnagrams(new String[]{"ddddddddddg","dgggggggggg"});
        List<List<String>> expected = new ArrayList<>();
        expected.add(new ArrayList<>(List.of("abc", "cba", "bac")));

        Assert.assertEquals(expected, actual);
    }
}
