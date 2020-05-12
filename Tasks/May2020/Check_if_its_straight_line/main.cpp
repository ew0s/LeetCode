#include <vector>
#include <iostream>


using std::vector;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates)
    {
        if (coordinates.size() == 2)
            return true;

        x_diff = std::abs(coordinates[1][0] - coordinates[0][0]);
        y_diff = std::abs(coordinates[1][1] - coordinates[0][1]);

        for (int i = 2; i < coordinates.size(); i++)
        {
            x_curr_diff = std::abs(coordinates[i][0] - coordinates[i - 1][0]);
            y_curr_diff = std::abs(coordinates[i][1] - coordinates[i - 1][1]);

            if (y_curr_diff * x_diff != x_curr_diff * y_diff)
                return false;
        }
        return true;
    }

private:
    int x_diff;
    int y_diff;
    int x_curr_diff;
    int y_curr_diff;
};


int main()
{
    Solution some;
    vector <vector<int>> arr = {{-3, -2}, {-1, -2}, {2, -2}, {0, -2}};
    std::cout << some.checkStraightLine(arr);
}