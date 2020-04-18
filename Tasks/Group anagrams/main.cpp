#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using std::vector;

class Solution {
public:
    vector<vector<std::string>> groupAnagrams(vector<std::string>& strs) {

        std::map<std::string, vector<std::string>> anagrams;
        vector<vector<std::string>> answer;

        for (std::string &str : strs) {
            std::string key_string = str;
            std::sort(key_string.begin(), key_string.end());

            anagrams[key_string].push_back(str);
        }

        for (auto str : anagrams)
            answer.push_back(str.second);

        return answer;
    }
};