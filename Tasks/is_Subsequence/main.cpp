#include <iostream>


class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int s_pointer = 0;
        int t_pointer = 0;

        while (t_pointer != t.length())
        {
            if (t[t_pointer] == s[s_pointer])
                s_pointer++;
            t_pointer++;
        }

        return s_pointer == s.length();
    }
};


int main ()
{
    std::string t;
    std::string s;
    s = "abc";
    t = "ahbgdc";

    Solution some;
    std::cout << some.isSubsequence(s, t);
}