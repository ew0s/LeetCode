#include <iostream>
#include <vector>


using std::string;

class Solution {
public:
    int firstUniqChar(string s)
    {
        std::vector <int> unique_char (26, 0);
        for (int i = 0; i < s.length(); i++)
            unique_char[s[i] - 'a']++;

        for (int i = 0; i < s.length(); i++)
            if (unique_char[s[i] - 'a'] == 1)
                return i;

        return -1;
    }
};


int main()
{
    Solution some;
    std::cout << some.firstUniqChar("leltterr");
}