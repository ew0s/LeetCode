#include <iostream>
#include <vector>


using std::string;
using std::vector;


class Solution {
public:
    string removeKdigits(string num, int k)
    {
        vector <int> digits (10, 0);
        for (auto digit : num)
            digits[digit - '0']++;
        for (auto digit : digits)
            std::cout << digit << " ";
    }
};


int main()
{
    Solution some;
    some.removeKdigits("1234567890", 9);
}