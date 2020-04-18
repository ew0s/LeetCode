#include <vector>
#include <queue>
#include <iostream>
using std::vector;


class Solution {
public:

    int lastStoneWeight(vector<int>& stones)
    {
        for (int stone : stones)
            stones_.push(stone);

        int first_max, second_max;
        int result_push;

        while (stones_.size() >= 2)
        {
            first_max = stones_.top();
            stones_.pop();
            second_max = stones_.top();
            stones_.pop();

            result_push = push_stones(first_max, second_max);

            if (result_push)
            {
                stones_.push(result_push);
            }
        }

        if (!stones_.empty())
            return stones_.top();
        else
            return 0;
    }

private:

    static inline int push_stones(int first, int second)
    {
        return first - second;
    }

    std::priority_queue <int> stones_;
};


int main()
{
    Solution some_solution;
    vector <int> stones = {2, 7, 4, 1, 8, 1};
    std::cout << some_solution.lastStoneWeight(stones);
}