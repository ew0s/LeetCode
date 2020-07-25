#include <vector>
#include <iostream>


using std::vector;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        binary_search(0, nums.size() - 1, target, nums);
        return idx_to_find;
    }

private:
    void binary_search(int left, int right, int target, vector<int>& nums)
    {
        if (left == right)
        {
            if (nums[left] == target)
            {
                idx_to_find = left;
                return;
            }
            else if (nums[left] < target)
            {
                idx_to_find = left + 1;
                return;
            }
            else
            {
                idx_to_find = left - 1;
                return;
            }
        }

        int middle = left + right / 2;
        if (nums[middle] == target)
        {
            idx_to_find = middle;
            return;
        }

        if (nums[middle] > target)
            binary_search(left, middle - 1, target, nums);
        else
            binary_search(middle + 1, right, target, nums);
    }

    int idx_to_find;
};


int main ()
{
    vector<int> array = {1, 2};
    Solution some;
    std::cout << some.searchInsert(array, -1);
}