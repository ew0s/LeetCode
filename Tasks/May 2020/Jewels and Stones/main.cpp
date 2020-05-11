#include <iostream>
#include <map>

using std::string;

class Solution {
public:
    int numJewelsInStones(string J, string S)
    {
        std::map <char, int> my_stones;

        for (auto it = S.begin(); it != S.end(); it++)
            my_stones[*it]++;

        for (auto it = J.begin(); it != J.end(); it++)
            count_jewels += my_stones[*it];

        return count_jewels;
    }

private:
    int count_jewels = 0;
};


int main ()
{
    Solution some_solution;
    std::string J, S;
    J = "z";
    S = "ZZ";
    std::cout << some_solution.numJewelsInStones(J, S);
}