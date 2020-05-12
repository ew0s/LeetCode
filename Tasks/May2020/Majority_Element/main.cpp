#include <map>
#include <iostream>
#include <vector>


using std::vector;

class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        std::map <int, int> count_unique;
        for (int i = 0; i < nums.size(); i++)
            count_unique[nums[i]]++;

        for (int i = 0; i < nums.size(); i++)
            if (count_unique[nums[i]] > (int)(nums.size() / 2))
                return nums[i];
            
        return 0;
    }
};


int main()
{
    Solution some;
    vector <int> arr = {1, 2, 3, 3, 3};
    std::cout << some.majorityElement(arr);
}