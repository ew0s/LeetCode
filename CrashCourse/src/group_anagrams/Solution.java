package group_anagrams;

import java.util.*;

public class Solution {
    public static List<List<String>> groupAnagrams(String[] strs) {
        HashMap<List<Integer>, List<String>> groupedAnagrams = new HashMap<>();
        for (String s : strs) {
            List<Integer> charsCount = new ArrayList<>(Collections.nCopies(26, 0));
            for (Character c : s.toCharArray()) {
                int idx = c - 'a';
                int count = charsCount.get(idx);
                charsCount.set(idx, count+1);
            }

            if (groupedAnagrams.containsKey(charsCount)) {
                List<String> anagrams = groupedAnagrams.get(charsCount);
                anagrams.add(s);
                continue;
            }

            groupedAnagrams.put(charsCount, new ArrayList<>(List.of(s)));
        }

        List<List<String>> result = new ArrayList<>(groupedAnagrams.size());
        result.addAll(groupedAnagrams.values());
        return result;
    }
}
