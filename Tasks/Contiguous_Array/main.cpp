#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:

    int findMaxLength(vector<int>& nums) {

        const unsigned int N = nums.size() * 2;

        count_arr.assign(N + 2, {-1, 0});

        int count = 0;
        count_arr[N / 2].first = 0;
        for (int)
        int max_len = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i])
                count++;
            else
                count--;

            if (count_arr[count] == -1)
                count_arr[count] = i;
            else
                if (i - count_arr[count] > max_len)
                    max_len = i - count_arr[count];
        }

        return max_len;
    }

private:

    vector <std::pair <int, int>> count_arr;
};


int main()
{
    Solution someSolution;
    vector <int> arr {0,0,0,1,1,1,1,1,0,0,0,0,0,0};
    std::cout << someSolution.findMaxLength(arr);
}