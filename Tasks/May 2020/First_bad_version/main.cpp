#include <iostream>
#include <vector>


class Solution {
public:
    int firstBadVersion(int n)
    {
        find_first_bad(1, n);
        return first_bad;
    }



private:

    void find_first_bad(size_t left, size_t right)
    {
        if (left > right)
            return;
        if (left == right) {
            if (isBadVersion(left))
                first_bad = left;
            return;
        }

        size_t middle = (left + right) / 2;

        if (isBadVersion(middle))
        {
            first_bad = middle;
            find_first_bad(left, middle - 1);
        }
        else
            find_first_bad(middle + 1, right);
    }

    inline bool isBadVersion(int value)
    {
        return arr[value - 1] != 0;
    }

    size_t first_bad;
    size_t arr[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
};


int main()
{
    Solution some_solution;
    std::cout << some_solution.firstBadVersion(10);
}