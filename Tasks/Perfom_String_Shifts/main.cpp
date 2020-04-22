#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;

class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {

        int direction = 0;
        for (auto & line : shift)
        {
            if (line[0])
                direction += line[1];
            else
                direction -= line[1];
        }

        std::string answer_str = s;
        char temp1;
        char temp2;
        int position;

        if (direction > 0)
        {
            for (int i = 0; i < s.size(); i++)
            {
                temp1 = s[i];

                position = (i + direction) % (int)s.size();

                answer_str[position] = temp1;
            }
        }

        else if (direction < 0)
        {
            for (int i = s.size() - 1; i >= 0; i--)
            {
                temp1 = s[i];

                position = (i + direction) % (int)s.size();

                if (position < 0)
                    position += s.size();

                answer_str[position] = temp1;
            }
        }

        else
            return s;

        return answer_str;
    }
};


int main()
{
    Solution solution;
    vector <vector<int>> shift = {{1, 1}, {0, 1}};
    std::string s = "abcdefg";

    std::cout << solution.stringShift(s, shift);
}